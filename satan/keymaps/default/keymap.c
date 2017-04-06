/* Keymaps for the custom Satan gh60 keyboard.
 * The base layer is a colemak layout with brackets in the middle (useful for programming mainly). Inspired by DreymarR's Big Bag of Keyboard Tricks.
 * The main modifier is ALT, which toggles the function layer.
 * The function layer contains the F keys and various shortcuts (arrows, pgup, pgdown, home, end, reset [to flash firmware])
 * The third layer is the numpad toggled layer, which also contains keys useful to read / show slides or videos and the arrows on f/r/s/t
 * The fourth layer is an US qwerty toggled layer.
 */

#include "satan.h"

#define _BL 0
#define _FL 1
#define _NL 2
#define _QL 3


#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  = |    \ |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  f|  p|  g|  [|  j|  l|  u|  y|  ;|  '|Backsp|
   * |-----------------------------------------------------------|
   * |CAPS   |  a|  r|  s|  t|  d|  ]|  h|  n|  e|  i|  o|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  /|  k|  m|  ,|  .|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space            |Alt |Gui |FN  |Ctrl |
   * `-----------------------------------------------------------'
   */
[_BL] = KEYMAP_ANSI( // base layer: colemak with middle parenthesis mod
  KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,KC_7   ,KC_8	 ,KC_9   ,KC_0   ,KC_MINS,KC_EQL ,KC_BSLS ,\
  KC_TAB ,KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_G   ,KC_LBRC,KC_J   ,KC_L	 ,KC_U   ,KC_Y   ,KC_SCLN,KC_QUOT,KC_BSPC ,\
  KC_ESC ,KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_D   ,KC_RBRC,KC_H   ,KC_N	 ,KC_E   ,KC_I   ,KC_O   ,KC_ENT		  ,\
  KC_LSFT		 ,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_SLSH,KC_K	 ,KC_M   ,KC_COMM,KC_DOT ,MO(_FL)		  ,\
  KC_LCTL,KC_LGUI,MO(_FL),                KC_SPC ,                                        MO(_FL),KC_RGUI,TG(_NL),TG(_QL)),

[_FL] = KEYMAP_ANSI( // function layer
  KC_GRV ,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4   ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10  ,KC_F11 ,KC_F12 ,RESET,  \
  _______,_______,_______,KC_UP  ,_______ ,_______,KC_LPRN,KC_RPRN,_______,KC_UP  ,KC_HOME ,KC_END ,BL_INC ,KC_DEL, \
  _______,KC_LALT,KC_LEFT,KC_DOWN,KC_RIGHT,_______,_______,_______,KC_LEFT,KC_DOWN,KC_RIGHT,_______,_______, \
  _______,_______,_______,_______,_______ ,_______,_______,KC_MINS,KC_EQL ,KC_PGUP,KC_PGDN ,_______,
  _______,_______,_______,                 _______,                                _______,_______ ,_______,_______),

[_NL] = KEYMAP_ANSI( // numpad and slide/pdf layer
  _______,_______,_______,_______,_______ ,_______,KC_PGUP,KC_7,KC_8  ,KC_9   ,KC_SLSH,_______,_______,_______, \
  _______,_______,_______,KC_UP  ,_______ ,_______,KC_PGDN,KC_4,KC_5  ,KC_6   ,KC_PAST,_______,_______,_______, \
  _______,_______,KC_LEFT,KC_DOWN,KC_RIGHT,_______,KC_HOME,KC_1,KC_2  ,KC_3   ,KC_MINS,_______,        _______, \
  _______,_______,_______,_______,_______ ,_______,KC_END ,KC_0,KC_DOT,KC_PLUS,_______,_______, \
  _______,_______,_______,                 _______,                               _______,_______,_______, _______),

// a qwerty layer. can be toggled
[_QL] = KEYMAP_ANSI( // for teh gaymz and teh noobz
  KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC, \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS, \
  KC_CAPS, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,         KC_ENT , \
  KC_LSFT,         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,         KC_RSFT, \
  KC_LCTL, KC_LGUI,KC_LALT,                KC_SPC,                                        KC_RALT,KC_RGUI,_______,TG(_QL)),
};
