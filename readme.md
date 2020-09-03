# Comfy Thumbs

An ortholinear keyboard inspired by comfortable and efficient thumb use and keycap compatibility. Has 87 keys.

Keyboard Maintainer: [GalacticWafer](https://github.com/GalacticWafer)  
Hardware Supported: ATmega32u4  

### Arduino Pro Micro Pinout

| Rows        | 0  | 1  | 2  | 3  | 4  |
|-------------|----|----|----|----|----|
| Arduino pin | 6  | 7  | 8  | 10 | 16 |
| QMK pin     | D7 | E6 | B4 | B6 | B2 |

| Columns     | 0  | 1  | 2  | 3  | 4  | 5  | 6   | 7   | 8  | 9  | 10 | 11 |
|-------------|----|----|----|----|----|----|-----|-----|----|----|----|----|
| Arduino pin | A3 | A2 | A1 | A0 | 15 | 14 | TX0 | RXI | 2  | 3  | 4  | 5  |
| QMK pin     | F4 | F5 | F6 | F7 | B1 | B3 | D3  | D2  | D1 | D0 | D4 | C6 |

|             | Backlight |
|-------------|-----------|
| Arduino pin | 9         |
| QMK pin     | B5        |

### Compiling the Firmware

Make example for this keyboard (after setting up your build environment):

    make comfythumbs

### The Defaukt Keymap

![Default Keymap](https://imgur.com/gallery/3Wbox9I)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).