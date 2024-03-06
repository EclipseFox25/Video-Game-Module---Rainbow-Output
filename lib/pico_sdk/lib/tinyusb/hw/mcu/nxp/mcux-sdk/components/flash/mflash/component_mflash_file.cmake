#Description: statically allocated file system for mflash; user_visible: False
include_guard(GLOBAL)
message("component_mflash_file component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/mflash_file.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)

#OR Logic component
if(${MCUX_DEVICE} STREQUAL "MIMXRT1166_cm4")
    include(component_mflash_rt1160)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1166_cm7")
    include(component_mflash_rt1160)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1052")
    include(component_mflash_rt1050)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1064")
    include(component_mflash_rt1064)
endif()
if(${MCUX_DEVICE} STREQUAL "MK64F12")
    include(component_mflash_frdmk64f)
endif()
if(${MCUX_DEVICE} STREQUAL "MK66F18")
    include(component_mflash_frdmk66f)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54628")
    include(component_mflash_lpc54xxx)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1021")
    include(component_mflash_rt1020)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1062")
    include(component_mflash_rt1060)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S018")
    include(component_mflash_lpc54xxx)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1176_cm4")
    include(component_mflash_rt1170)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1176_cm7")
    include(component_mflash_rt1170)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC54S018M")
    include(component_mflash_lpc54s018m)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S69_cm33_core0")
    include(component_mflash_lpc55xxx)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT1024")
    include(component_mflash_rt1024)
endif()
if(${MCUX_DEVICE} STREQUAL "LPC55S28")
    include(component_mflash_lpc55xxx)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT685S_cm33")
    include(component_mflash_rt685)
endif()
if(${MCUX_DEVICE} STREQUAL "MIMXRT595S_cm33")
    include(component_mflash_rt595)
endif()

