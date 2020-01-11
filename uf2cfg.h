#define UF2_VERSION "2.7.5"
#ifndef BOARD_ID
#define BOARD_ID "Striso board v1.92"
#endif
#define INDEX_URL "http://www.striso.org"
#define UF2_NUM_BLOCKS 8000
#define VOLUME_LABEL "Striso FW"
// where the UF2 files are allowed to write data - we allow MBR, since it seems part of the softdevice .hex file
#define USER_FLASH_START (uint32_t)(APP_LOAD_ADDRESS)
#define USER_FLASH_END (0x08000000+BOARD_FLASH_SIZE)

