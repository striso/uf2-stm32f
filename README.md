# UF2 Bootloaders for STM32

This implements USB mass storage flashing using [UF2 format](https://github.com/Microsoft/uf2)

This branch is configured for the [Striso board MPE MIDI controller](https://www.striso.org/).

It differs from the original in the following:

- new random family id (0x2fca8c7e) to prevent flashing arcade firmware
- add a INFO_FW.TXT file with the firmware version (written by firmware, see [Striso control firmware repository](https://github.com/striso/striso-control-firmware) for details)

## Build instructions

To build just run ``make`` in this folder.
This will fetch git submodules if needed and build libopenocm3
(which only happens once).

The binaries will be in `build/BOARDNAME`. 
The following files will be built:
* `bootloader.elf` - for use with JTAG adapters
* `bootloader.bin` - for direct onboard upgrading
* `flasher.uf2` - if you already have a UF2 bootloader, you can just drop this on board and it will update the bootloader
* `flasher16.uf2` - this is similar, but if you have an older UF2 bootloader on the board, that expects the app to start at 16k (`0x08004000`)

## Adding board

Start from `f401` (for 64 pin package) or `f401c` (for 48 pin package) generic board.
Copy the folder and modify `board.h`, follow instructions at 
https://arcade.makecode.com/hardware/adding#generating-bootloader

## License

License: LGPL for libopencm3, BSD for what was left of the PX4 bootloader (see LICENSE.md),
MIT for the UF2 stuff, and ISC for the bits from dapboot.

## Credits

This repo was forked from https://github.com/PX4/Bootloader

It contains small bits from https://github.com/devanlai/dapboot,
mostly the WebUSB, that has been heavily modified though.

The UF2 stuff was mostly lifted from https://github.com/Microsoft/uf2-samdx1
by way of (non-working) https://github.com/Microsoft/uf2-nrf5

The dmesg subsystem is adapted from https://github.com/lancaster-university/codal-core
