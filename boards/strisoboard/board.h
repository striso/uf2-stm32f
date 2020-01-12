#ifndef BOARD_H
#define BOARD_H

#include "../../pins.h"

#define OSC_FREQ 8
#define USBDEVICESTRING "Striso board"
#define USBMFGSTRING "Striso"
#define BOARD_FLASH_SECTORS 8
#define BOARD_FLASH_SIZE (512 * 1024)

// Use alt/config button to boot in bootloader
#define BOARD_FORCE_BL_PORT GPIOA
#define BOARD_FORCE_BL_PIN 1<<10
#define BOARD_FORCE_BL_STATE 1

// PIN LED = PA5
// #define GPIOI_BUTTON_PORT    2  // also BOOT0
// #define GPIOI_BUTTON_UP      1
// #define GPIOA_BUTTON_DOWN    9 // GPIOA_UART1_TX
// #define GPIOA_BUTTON_ALT    10 // GPIOA_UART1_RX
// #define PORT_WS2812     GPIOI
// #define PIN_WS2812      0

#ifdef DEFINE_CONFIGDATA
__attribute__((section(".config"))) __attribute__((used)) //
const uint32_t configData[] = {
    /* CF2 START */
    CFG_MAGIC0, CFG_MAGIC1, // magic
    6, 100,  // used entries, total entries
    CFG_PIN_LED, 0x05, // PA_5
    CFG_PIN_LED1, 0x05, // PA_5
    CFG_PIN_NEOPIXEL, 0x80, // PI_0
    CFG_NUM_NEOPIXELS, 3,
    CFG_BOOTLOADER_PROTECTION, 0,
    CFG_UF2_FAMILY, 0x2fca8c7e,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* CF2 END */
};
#endif

#endif /* BOARD_H */
