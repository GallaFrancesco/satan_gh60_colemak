# Satan GH60 Colemak Layout

Keymaps for the custom Satan gh60 keyboard.

## Layers

* The base layer is a colemak layout with brackets in the middle (useful for programming mainly). Inspired by [DreymarR's Big Bag of Keyboard Tricks](https://forum.colemak.com/topic/1438-dreymars-big-bag-of-keyboard-tricks-linuxxkb-files-included/).
* The function layer contains the F keys and various shortcuts (arrows, pgup, pgdown, home, end, reset [to flash firmware if the reset button cannot be used])
* The third layer is the numpad toggled layer, which also contains keys useful to read / show slides or videos and the arrows on f/r/s/t
* The fourth layer is an US qwerty toggled layer.

The main modifier is ALT, which toggles the function layer.

## Building and Flashing

This layout is based on the Satan default [QMK firmware](https://github.com/qmk/qmk_firmware). To build it: 

* Copy the directory `satan-mod` into `qmk_firmware/keyboards`.
* Navigate to `.../satan-mod/keymaps/default/`
* The layout and keymaps are into `keymap.c`, so simply run:
```
make
```
Then put your keyboard in flash mode by hitting the RESET button and run:
```
make dfu
```
This should flash the new firmware to the keyboard and you should be up and running.
