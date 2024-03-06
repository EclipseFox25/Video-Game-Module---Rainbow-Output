/*
 * Copyright 2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*! @name PORTA4 (number 10), SW1
  @{ */
#define BOARD_SW1_GPIO GPIOA /*!<@brief GPIO device name: GPIOA */
#define BOARD_SW1_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_SW1_PIN 4U     /*!<@brief PORTA pin index: 4 */
                             /* @} */

/*! @name PORTD1 (number 64), SW2
  @{ */
#define BOARD_SW2_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_SW2_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_SW2_PIN 1U     /*!<@brief PORTD pin index: 1 */
                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitButtonsPins(void);

/*! @name PORTJ3 (number 62), D3/GRN
  @{ */
#define BOARD_LED_GREEN_GPIO GPIOJ /*!<@brief GPIO device name: GPIOJ */
#define BOARD_LED_GREEN_PORT PORTJ /*!<@brief PORT device name: PORTJ */
#define BOARD_LED_GREEN_PIN 3U     /*!<@brief PORTJ pin index: 3 */
                                   /* @} */

/*! @name PORTJ4 (number 63), D4/RED
  @{ */
#define BOARD_LED_RED_GPIO GPIOJ /*!<@brief GPIO device name: GPIOJ */
#define BOARD_LED_RED_PORT PORTJ /*!<@brief PORT device name: PORTJ */
#define BOARD_LED_RED_PIN 4U     /*!<@brief PORTJ pin index: 4 */
                                 /* @} */

/*! @name PORTD0 (number 61), J17[2]/J19[1]/J25[17]/D5/ORANGE/IRDRJ/CMP0_IN0
  @{ */
#define BOARD_LED_ORANGE_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_LED_ORANGE_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_LED_ORANGE_PIN 0U     /*!<@brief PORTD pin index: 0 */
                                    /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void);

#define PORT_DFER_DFE_0_MASK 0x01u /*!<@brief Digital Filter Enable Mask for item 0. */

/*! @name PORTE0 (number 80), J32[A8]/J11[1]/U5[6]/I2C0_SDA
  @{ */
#define BOARD_ACCEL_SDA_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_ACCEL_SDA_PIN 0U     /*!<@brief PORTE pin index: 0 */
                                   /* @} */

/*! @name PORTD7 (number 79), J32[A7]/J10[1]/U5[4]/I2C0_SCL
  @{ */
#define BOARD_ACCEL_SCL_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_ACCEL_SCL_PIN 7U     /*!<@brief PORTD pin index: 7 */
                                   /* @} */

/*! @name PORTJ5 (number 66), J14[1]/U5[11]/INT1
  @{ */
#define BOARD_ACCEL_INT1_GPIO GPIOJ /*!<@brief GPIO device name: GPIOJ */
#define BOARD_ACCEL_INT1_PORT PORTJ /*!<@brief PORT device name: PORTJ */
#define BOARD_ACCEL_INT1_PIN 5U     /*!<@brief PORTJ pin index: 5 */
                                    /* @} */

/*! @name PORTJ6 (number 67), J16[1]/U5[9]/INT2
  @{ */
#define BOARD_ACCEL_INT2_GPIO GPIOJ /*!<@brief GPIO device name: GPIOJ */
#define BOARD_ACCEL_INT2_PORT PORTJ /*!<@brief PORT device name: PORTJ */
#define BOARD_ACCEL_INT2_PIN 6U     /*!<@brief PORTJ pin index: 6 */
                                    /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCELPins(void);

/*!
 * @brief
 * UART2 IrDA Select: Pad RX input PTI[6] or PTE[6] selected for RX input of UART2 and UART2 TX signal is not used
 * for modulation.
 */
#define MISC_CTL_UART2IRSEL_NONE 0x00u

/*! @name PORTI7 (number 7), UART2_TX
  @{ */
#define BOARD_DEBUG_UART_TX_PORT PORTI /*!<@brief PORT device name: PORTI */
#define BOARD_DEBUG_UART_TX_PIN 7U     /*!<@brief PORTI pin index: 7 */
                                       /* @} */

/*! @name PORTI6 (number 6), UART2_RX
  @{ */
#define BOARD_DEBUG_UART_RX_PORT PORTI /*!<@brief PORT device name: PORTI */
#define BOARD_DEBUG_UART_RX_PIN 6U     /*!<@brief PORTI pin index: 6 */
                                       /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void);

/*! @name PORTE3 (number 85), J7[2]/Y2[1]/XTAL_8MHz
  @{ */
#define BOARD_XTAL0_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_XTAL0_PIN 3U     /*!<@brief PORTE pin index: 3 */
                               /* @} */

/*! @name PORTE2 (number 84), J4[2]/Y2[3]/EXTAL_8MHz
  @{ */
#define BOARD_EXTAL0_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_EXTAL0_PIN 2U     /*!<@brief PORTE pin index: 2 */
                                /* @} */

/*! @name XTAL32 (number 33), Y1[1]/XTAL_32K
  @{ */
/* @} */

/*! @name EXTAL32 (number 34), Y1[2]/EXTAL_32K
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitOSCPins(void);

/*! @name PORTG4 (number 114), J32[B10]/J15[1]/U4[5]/SPI0_MOSI
  @{ */
#define BOARD_FLASH_SI_PORT PORTG /*!<@brief PORT device name: PORTG */
#define BOARD_FLASH_SI_PIN 4U     /*!<@brief PORTG pin index: 4 */
                                  /* @} */

/*! @name PORTG5 (number 115), J32[B11]/J13[2]/U4[2]/SPI0_MISO
  @{ */
#define BOARD_FLASH_SO_PORT PORTG /*!<@brief PORT device name: PORTG */
#define BOARD_FLASH_SO_PIN 5U     /*!<@brief PORTG pin index: 5 */
                                  /* @} */

/*! @name PORTG3 (number 113), J32[B7]/J12[1]/U4[6]/SPI0_SCK
  @{ */
#define BOARD_FLASH_CLK_PORT PORTG /*!<@brief PORT device name: PORTG */
#define BOARD_FLASH_CLK_PIN 3U     /*!<@brief PORTG pin index: 3 */
                                   /* @} */

/*! @name PORTG2 (number 112), J32[B9]/J9[2]/U4[1]/SPI0_PCS0
  @{ */
#define BOARD_FLASH_CS_PORT PORTG /*!<@brief PORT device name: PORTG */
#define BOARD_FLASH_CS_PIN 2U     /*!<@brief PORTG pin index: 2 */
                                  /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSPI_FLASHPins(void);

/*!
 * @brief
 * UART0 IrDA Select: UART0 selected for IrDA modulation.
 * UART0 TX modulated by XBAR_OUT[14] and UART0 RX input connected to XBAR_OUT[13].
 * UARTxIRSEL cannot configure XBAR_OUT[14] and XBAR_OUT[13] automatically, and they need extra configuration in
 * XBAR.
 * User should configure XBAR[14:13] accordingly.
 */
#define MISC_CTL_UART0IRSEL_IRDA 0x01u
/*!
 * @brief UART Modulation Type: TypeB (AND'ed) Modulation selected for IrDA */
#define MISC_CTL_UARTMODTYPE_TypeB 0x01u

/*! @name PORTL2 (number 129), J18[1]/J25[23]/IRDTJ/XBAR0_OUT10
  @{ */
#define BOARD_IR_TX_PORT PORTL /*!<@brief PORT device name: PORTL */
#define BOARD_IR_TX_PIN 2U     /*!<@brief PORTL pin index: 2 */
                               /* @} */

/*! @name PORTD0 (number 61), J17[2]/J19[1]/J25[17]/D5/ORANGE/IRDRJ/CMP0_IN0
  @{ */
#define BOARD_IR_RX_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_IR_RX_PIN 0U     /*!<@brief PORTD pin index: 0 */
                               /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitInfra_RedPins(void);

/*! @name PORTF1 (number 95), J21[1]/POT_5K
  @{ */
#define BOARD_ADC_POT_PORT PORTF /*!<@brief PORT device name: PORTF */
#define BOARD_ADC_POT_PIN 1U     /*!<@brief PORTF pin index: 1 */
                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPotentiometerPins(void);

/*! @name PORTF2 (number 96), J20[1]/TEMP_SENSE
  @{ */
#define BOARD_ADC_TEMP_PORT PORTF /*!<@brief PORT device name: PORTF */
#define BOARD_ADC_TEMP_PIN 2U     /*!<@brief PORTF pin index: 2 */
                                  /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitTemp_sensorPins(void);

/*! @name PORTB7 (number 26), DS1[1]/LCD_P38
  @{ */
#define BOARD_LCD_P38_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_LCD_P38_PIN 7U     /*!<@brief PORTB pin index: 7 */
                                 /* @} */

/*! @name PORTB5 (number 24), DS1[2]/LCD_P36
  @{ */
#define BOARD_LCD_P36_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_LCD_P36_PIN 5U     /*!<@brief PORTB pin index: 5 */
                                 /* @} */

/*! @name PORTB3 (number 22), DS1[3]/LCD_P34
  @{ */
#define BOARD_LCD_P34_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_LCD_P34_PIN 3U     /*!<@brief PORTB pin index: 3 */
                                 /* @} */

/*! @name PORTB1 (number 20), DS1[4]/LCD_P32
  @{ */
#define BOARD_LCD_P32_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_LCD_P32_PIN 1U     /*!<@brief PORTB pin index: 1 */
                                 /* @} */

/*! @name PORTB0 (number 16), DS1[5]/LCD_P31
  @{ */
#define BOARD_LCD_P31_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_LCD_P31_PIN 0U     /*!<@brief PORTB pin index: 0 */
                                 /* @} */

/*! @name PORTA6 (number 12), DS1[6]/LCD_P29
  @{ */
#define BOARD_LCD_P29_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_LCD_P29_PIN 6U     /*!<@brief PORTA pin index: 6 */
                                 /* @} */

/*! @name PORTA2 (number 8), DS1[7]/LCD_P25
  @{ */
#define BOARD_LCD_P25_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_LCD_P25_PIN 2U     /*!<@brief PORTA pin index: 2 */
                                 /* @} */

/*! @name PORTA0 (number 4), DS1[8]/LCD_P23
  @{ */
#define BOARD_LCD_P23_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_LCD_P23_PIN 0U     /*!<@brief PORTA pin index: 0 */
                                 /* @} */

/*! @name PORTC4 (number 31), DS1[9]/LCD_P43
  @{ */
#define BOARD_LCD_P43_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_LCD_P43_PIN 4U     /*!<@brief PORTC pin index: 4 */
                                 /* @} */

/*! @name PORTB6 (number 25), DS1[10]/LCD_P37
  @{ */
#define BOARD_LCD_P37_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_LCD_P37_PIN 6U     /*!<@brief PORTB pin index: 6 */
                                 /* @} */

/*! @name PORTB4 (number 23), DS1[11]/LCD_P35
  @{ */
#define BOARD_LCD_P35_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_LCD_P35_PIN 4U     /*!<@brief PORTB pin index: 4 */
                                 /* @} */

/*! @name PORTB2 (number 21), DS1[12]/LCD_P33
  @{ */
#define BOARD_LCD_P33_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_LCD_P33_PIN 2U     /*!<@brief PORTB pin index: 2 */
                                 /* @} */

/*! @name PORTJ2 (number 17), DS1[13]/LCD_P50
  @{ */
#define BOARD_LCD_P50_PORT PORTJ /*!<@brief PORT device name: PORTJ */
#define BOARD_LCD_P50_PIN 2U     /*!<@brief PORTJ pin index: 2 */
                                 /* @} */

/*! @name PORTA7 (number 13), DS1[14]/LCD_P30
  @{ */
#define BOARD_LCD_P30_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_LCD_P30_PIN 7U     /*!<@brief PORTA pin index: 7 */
                                 /* @} */

/*! @name PORTI5 (number 3), DS1[15]/LCD_P45
  @{ */
#define BOARD_LCD_P45_PORT PORTI /*!<@brief PORT device name: PORTI */
#define BOARD_LCD_P45_PIN 5U     /*!<@brief PORTI pin index: 5 */
                                 /* @} */

/*! @name PORTA1 (number 5), DS1[16]/LCD_P24
  @{ */
#define BOARD_LCD_P24_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_LCD_P24_PIN 1U     /*!<@brief PORTA pin index: 1 */
                                 /* @} */

/*! @name PORTA3 (number 9), DS1[17]/LCD_P26
  @{ */
#define BOARD_LCD_P26_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_LCD_P26_PIN 3U     /*!<@brief PORTA pin index: 3 */
                                 /* @} */

/*! @name PORTA5 (number 11), DS1[18]/LCD_P28
  @{ */
#define BOARD_LCD_P28_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_LCD_P28_PIN 5U     /*!<@brief PORTA pin index: 5 */
                                 /* @} */

/*! @name PORTI4 (number 143), DS1[19]/LCD_P44
  @{ */
#define BOARD_LCD_P44_PORT PORTI /*!<@brief PORT device name: PORTI */
#define BOARD_LCD_P44_PIN 4U     /*!<@brief PORTI pin index: 4 */
                                 /* @} */

/*! @name PORTL6 (number 142), DS1[20]/LCD_P59
  @{ */
#define BOARD_LCD_P59_PORT PORTL /*!<@brief PORT device name: PORTL */
#define BOARD_LCD_P59_PIN 6U     /*!<@brief PORTL pin index: 6 */
                                 /* @} */

/*! @name PORTL4 (number 140), DS1[21]/LCD_P57
  @{ */
#define BOARD_LCD_P57_PORT PORTL /*!<@brief PORT device name: PORTL */
#define BOARD_LCD_P57_PIN 4U     /*!<@brief PORTL pin index: 4 */
                                 /* @} */

/*! @name PORTH4 (number 122), DS1[22]/LCD_P19
  @{ */
#define BOARD_LCD_P19_PORT PORTH /*!<@brief PORT device name: PORTH */
#define BOARD_LCD_P19_PIN 4U     /*!<@brief PORTH pin index: 4 */
                                 /* @} */

/*! @name PORTG6 (number 116), DS1[23]/LCD_P13
  @{ */
#define BOARD_LCD_P13_PORT PORTG /*!<@brief PORT device name: PORTG */
#define BOARD_LCD_P13_PIN 6U     /*!<@brief PORTG pin index: 6 */
                                 /* @} */

/*! @name PORTL5 (number 141), DS1[24]/LCD_P58
  @{ */
#define BOARD_LCD_P58_PORT PORTL /*!<@brief PORT device name: PORTL */
#define BOARD_LCD_P58_PIN 5U     /*!<@brief PORTL pin index: 5 */
                                 /* @} */

/*! @name PORTL3 (number 139), DS1[25]/LCD_P56
  @{ */
#define BOARD_LCD_P56_PORT PORTL /*!<@brief PORT device name: PORTL */
#define BOARD_LCD_P56_PIN 3U     /*!<@brief PORTL pin index: 3 */
                                 /* @} */

/*! @name PORTI3 (number 131), DS1[26]/LCD_P22
  @{ */
#define BOARD_LCD_P22_PORT PORTI /*!<@brief PORT device name: PORTI */
#define BOARD_LCD_P22_PIN 3U     /*!<@brief PORTI pin index: 3 */
                                 /* @} */

/*! @name PORTH5 (number 123), DS1[27]/LCD_P20
  @{ */
#define BOARD_LCD_P20_PORT PORTH /*!<@brief PORT device name: PORTH */
#define BOARD_LCD_P20_PIN 5U     /*!<@brief PORTH pin index: 5 */
                                 /* @} */

/*! @name PORTG7 (number 117), DS1[28]/LCD_P14
  @{ */
#define BOARD_LCD_P14_PORT PORTG /*!<@brief PORT device name: PORTG */
#define BOARD_LCD_P14_PIN 7U     /*!<@brief PORTG pin index: 7 */
                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLCDPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
