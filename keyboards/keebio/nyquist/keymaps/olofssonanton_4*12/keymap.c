#include QMK_KEYBOARD_H

#define _QW 0
#define _NAV 1
#define _FUN 2
#define _NUM 3
#define _SYM 4
#define _FKEY 5
#define _MOUS 7
#define _SCRL 8

enum custom_keycodes {
  NAV = SAFE_RANGE,
  MOU,
  FUN,
  NUM,
  SYM,
  FKEY,
  MOUS,
  SCRL,
};

#define _______ KC_TRNS
#define ___X___ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .-----------------------------------------------------------------------------------------------------------.
 * | ESC    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [ (Å)  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | TAB    | A      | S      | D      | F      | G      | H      | J      | K      | L      | ; (Ö)  | ' (Ä)  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   |        | LALT   | FN     | SPACE  | ENTER  | BACKSP | FN     | RALT   | APP    | RCTRL  |
 * '-----------------------------------------------------------------------------------------------------------'
 */
  [_QW] = LAYOUT_ortho_4x12(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, ___X___, KC_LALT, NAV,     KC_SPC,  KC_ENT,  KC_BSPC, FUN,     KC_RALT, KC_APP,  KC_RCTL
  ),

  [_NAV] = LAYOUT_ortho_4x12(
    _______, FKEY,    ___X___, MOUS,    SYM,     ___X___, ___X___, KC_HOME, KC_UP,   KC_END,  KC_PGUP, ___X___,
    _______, KC_LCTL, KC_LSFT, KC_LGUI, KC_LALT, ___X___, ___X___, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, ___X___,
    _______, NUM,     ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_DEL,  ___X___, _______, _______, _______
  ),

  [_FUN] = LAYOUT_ortho_4x12(
    RESET,   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, RGB_HUD, RGB_SAI, RGB_VAI, RGB_MOD, ___X___,
    KC_MPRV, KC_MPLY, KC_MNXT, ___X___, ___X___, ___X___, ___X___, RGB_HUI, RGB_SAD, RGB_VAD, RGB_RMOD,___X___,
    KC_VOLD, KC_MUTE, KC_VOLU, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, RGB_TOG, ___X___, _______, ___X___, ___X___, ___X___
  ),

  [_NUM] = LAYOUT_ortho_4x12(
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, KC_7,    KC_8,    KC_9,    KC_PPLS, ___X___,
    ___X___, _______, _______, _______, _______, ___X___, ___X___, KC_4,    KC_5,    KC_6,    KC_PMNS, ___X___,
    ___X___, _______, ___X___, ___X___, ___X___, ___X___, ___X___, KC_1,    KC_2,    KC_3,    KC_PAST, ___X___,
    ___X___, ___X___, ___X___, ___X___, _______, _______, _______, KC_0,    KC_COMM, KC_DOT,  KC_PSLS, ___X___
  ),

  [_SYM] = LAYOUT_ortho_4x12(
    ___X___, ___X___, ___X___, ___X___, _______, ___X___, ___X___, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL,  ___X___,
    ___X___, _______, _______, _______, _______, ___X___, ___X___, ___X___, ___X___, ___X___, KC_BSLS, ___X___,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, _______, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___
  ),

  [_FKEY] = LAYOUT_ortho_4x12(
    ___X___, _______, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
    ___X___, _______, _______, _______, _______, ___X___, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11 , KC_F12,
    ___X___, ___X___, ___X___, ___X___, _______, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___
  ),

  [_MOUS] = LAYOUT_ortho_4x12(
    ___X___, ___X___, SCRL,    _______, KC_ACL1, ___X___, ___X___, ___X___, KC_MS_U, ___X___, ___X___, ___X___,
    ___X___, _______, _______, _______, _______, ___X___, ___X___, KC_MS_L, KC_MS_D, KC_MS_R, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, _______, ___X___, KC_BTN1, KC_BTN2, ___X___, ___X___, ___X___, ___X___
  ),

  [_SCRL] = LAYOUT_ortho_4x12(
    ___X___, ___X___, _______, _______, _______, ___X___, ___X___, ___X___, KC_WH_U, ___X___, ___X___, ___X___,
    ___X___, _______, _______, _______, _______, ___X___, ___X___, KC_WH_L, KC_WH_D, KC_WH_R, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, _______, ___X___, KC_BTN3, ___X___, ___X___, ___X___, ___X___, ___X___
  )

/*
  [_XX] = LAYOUT_ortho_4x12
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___,
    ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___
  )
*/
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case NAV:
      if (record->event.pressed) {
        layer_on(_NAV);
      } else {
        layer_off(_NAV);
      }
      return false;
      break;
    case FUN:
      if (record->event.pressed) {
        layer_on(_FUN);
      } else {
        layer_off(_FUN);
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
    case FKEY:
      if (record->event.pressed) {
        layer_on(_FKEY);
      } else {
        layer_off(_FKEY);
      }
      return false;
      break;
    case MOUS:
      if (record->event.pressed) {
        layer_on(_MOUS);
      } else {
        layer_off(_MOUS);
      }
      return false;
      break;
    case SCRL:
      if (record->event.pressed) {
        layer_on(_SCRL);
      } else {
        layer_off(_SCRL);
      }
      return false;
      break;
  }
  return true;
}
