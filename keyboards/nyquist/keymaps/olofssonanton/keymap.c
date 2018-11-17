#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QW 0
#define _LW 1
#define _RS 2
#define _NUM 3
#define _SYM 4

enum custom_keycodes {
  LW,
  RS,
  NUM,
  SYM,
};

#define _______ KC_TRNS
#define ___X___ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .-----------------------------------------------------------------------------------------------------------.
 * | `      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | ESC    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | TAB    | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   |        | LALT   | FN     | SPACE  | ENTER  | BACKSP | FN     | RALT   | APP    | RCTRL  |
 * '-----------------------------------------------------------------------------------------------------------'
 */
 [_QW] = LAYOUT( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    ___X___,  \
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    ___X___,  \
  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  \
  KC_LCTL, KC_LGUI, ___X___, KC_LALT, LW,      KC_SPC,  KC_ENT,  KC_BSPC, RS,      KC_RALT, KC_APP,  KC_RCTL   \
 ),


 [_LW] = LAYOUT( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11 , ___X___,  \
  _______, NUM,     ___X___, ___X___, SYM,     ___X___, ___X___, KC_HOME, KC_UP,   KC_END,  KC_PGUP, ___X___,  \
  _______, KC_LCTL, KC_LSFT, KC_LGUI, KC_LALT, ___X___, ___X___, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, ___X___,  \
  _______, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, _______,  \
  _______, _______, _______, _______, _______, _______, _______, KC_DEL,  ___X___, _______, _______, _______   \
 ),

 [_RS] = LAYOUT( \
  ___X___, ___X___, ___X___, ___X___, ___X___, RGB_HUD, RGB_HUI, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  RESET,   KC_CALC, KC_MYCM, ___X___, ___X___, RGB_SAD, RGB_SAI, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  KC_MPRV, KC_MPLY, KC_MNXT, ___X___, ___X___, RGB_VAD, RGB_VAI, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  KC_VOLD, KC_MUTE, KC_VOLU, ___X___, ___X___, RGB_RMOD,RGB_MOD, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, RGB_TOG, ___X___, _______, ___X___, ___X___, ___X___   \
 ),

 [_NUM] = LAYOUT( \
  ___X___, ___X___, ___X___, ___X___, ___X___, KC_PSCR, KC_PAUS, KC_NLCK, KC_CAPS, KC_SLCK, KC_SLSH, ___X___,  \
  ___X___, _______, ___X___, ___X___, ___X___, ___X___, ___X___, KC_P7,   KC_P8,   KC_P9,   KC_ASTR, ___X___,  \
  ___X___, _______, _______, _______, _______, ___X___, ___X___, KC_P4,   KC_P5,   KC_P6,   KC_MINS, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, KC_P1,   KC_P2,   KC_P3,   KC_PLUS, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, _______, _______, ___X___, KC_P0,   KC_PDOT, KC_PENT, ___X___, ___X___   \
 ),

 [_SYM] = LAYOUT( \
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, _______, ___X___, ___X___, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL,  ___X___,  \
  ___X___, _______, _______, _______, _______, ___X___, ___X___, ___X___, ___X___, ___X___, KC_BSLS, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, _______, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   \
 )

/*
 [_XX] = LAYOUT( \
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,  \
  ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   \
 )
*/
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LW:
      if (record->event.pressed) {
        layer_on(_LW);
      } else {
        layer_off(_LW);
      }
      return false;
      break;
    case RS:
      if (record->event.pressed) {
        layer_on(_RS);
      } else {
        layer_off(_RS);
      }
      return false;
      break;
    case NUM:
      if (record->event.pressed) {
        layer_on(_NUM);
      } else {
        layer_off(_NUM);
      }
      return false;
      break;
    case SYM:
      if (record->event.pressed) {
        layer_on(_SYM);
      } else {
        layer_off(_SYM);
      }
      return false;
      break;
  }
  return true;
}
