#include <stdio.h>
#include <stdlib.h>
#include <pico/stdlib.h>
#include <pico/multicore.h>
#include <hardware/clocks.h>
#include <hardware/irq.h>
#include <hardware/sync.h>
#include <hardware/vreg.h>
#include <pico/sem.h>
#include <FreeRTOS.h>
#include <task.h>
#include "frame.h"
#include "led.h"
#include "led_state.h"
#include "uart.h"
#include "usb.h"
#include "bitmaps.h"

// Define rainbow colors in RGB565 format
static const uint16_t rainbow_colors[] = {
    0xF800, // Red
    0xFC00, // Orange
    0xFFE0, // Yellow
    0x07E0, // Green
    0x001F, // Blue
    0x781F, // Indigo
    0xF81F  // Violet
};

static void init() {
    led_init();

    sleep_ms(10);
    vreg_set_voltage(frame_get_voltage());

    sleep_ms(10);
    set_sys_clock_khz(frame_get_clock(), true);

    stdio_init_all();
    frame_init();
    usb_init();
    uart_protocol_init();

    led_red(false);
}


static const size_t rainbow_colors_count = sizeof(rainbow_colors) / sizeof(rainbow_colors[0]);
static size_t current_color_index = 0;
static uint16_t color_background;
static const uint8_t totalSteps = 20; // Total steps for smooth transition
static uint8_t currentStep = 0; // Current step in the transition

// Function to linearly interpolate between two colors in RGB565 format
uint16_t interpolate_color(uint16_t colorStart, uint16_t colorEnd, uint8_t step, uint8_t maxSteps) {
    if(step >= maxSteps) return colorEnd;

    int rStart = (colorStart >> 11) & 0x1F;
    int gStart = (colorStart >> 5) & 0x3F;
    int bStart = colorStart & 0x1F;

    int rEnd = (colorEnd >> 11) & 0x1F;
    int gEnd = (colorEnd >> 5) & 0x3F;
    int bEnd = colorEnd & 0x1F;

    int r = rStart + ((rEnd - rStart) * step / maxSteps);
    int g = gStart + ((gEnd - gStart) * step / maxSteps);
    int b = bStart + ((bEnd - bStart) * step / maxSteps);

    return (uint16_t)((r << 11) | (g << 5) | b);
}

// Modified function to cycle through the rainbow colors for the background with smooth transitions
void cycle_rainbow_background_colors_smooth() {
    uint16_t currentColor = rainbow_colors[current_color_index];
    uint16_t nextColor = rainbow_colors[(current_color_index + 1) % rainbow_colors_count];

    uint16_t interpolatedColor = interpolate_color(currentColor, nextColor, currentStep, totalSteps);
    frame_set_color(interpolatedColor, color_background); // Update the background color

    currentStep++;
    if(currentStep >= totalSteps) {
        currentStep = 0;
        current_color_index = (current_color_index + 1) % rainbow_colors_count; // Move to the next color
    }
}

void RainbowBackgroundColorCyclerTask(void *pvParameters) {
    const TickType_t xDelay = 50 / portTICK_PERIOD_MS; // Adjust delay for smoother transitions

    while(1) {
        cycle_rainbow_background_colors_smooth();
        vTaskDelay(xDelay);
    }
}

static void show_defaul_screen() {
    uint8_t* frame_buffer = calloc(FLIPPER_BITMAP_SIZE, sizeof(uint8_t));

    bitmap_xbm_to_screen_frame(
        frame_buffer, bitmap_default_screen, FLIPPER_SCREEN_WIDTH, FLIPPER_SCREEN_HEIGHT);
    frame_parse_data(OrientationHorizontal, (const frame_t*)frame_buffer, pdMS_TO_TICKS(1000));

    free(frame_buffer);
}

int main() {
    init();

    xTaskCreate(RainbowBackgroundColorCyclerTask, "RainbowBgColorCycler", 256, NULL, tskIDLE_PRIORITY + 1, NULL);

    show_defaul_screen();

    // init the led task
    led_state_init();

    vTaskStartScheduler();

    while(1) __wfe();
    __builtin_unreachable();
}
