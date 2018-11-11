/* Copyright 2018 Anton Olofsson
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "xd75.h"

// Layer shorthand
#define _QW 0
#define _LW 1
#define _RS 2
#define _NUM 3

#define ___X___ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | `      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | -      | =      | BACKSP | HOME   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------+--------|
 * | ESC    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [      | ]      | DEL    | END    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------|
 * | TAB    | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      | \      | ENTER  | PG UP  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------+--------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | RSHIFT |        | UP     | PG DN  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   |        | LALT   | FN     | SPACE  | ENTER  | BACKSP | FN     | RALT   | APP    | RCTRL  | LEFT   | DOWN   | RIGHT  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 [_QW] = { /* QWERTY */
  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME  },
  { KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_DEL,  KC_END   },
  { KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,  KC_PGUP  },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, _______, KC_UP,   KC_PGDN  },
  { KC_LCTL, KC_LGUI, _______, KC_LALT, MO(_LW), KC_SPC,  KC_ENT,  KC_BSPC, MO(_RS), KC_RALT, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  },
 },


/* LOWERED TODO: Fix layout graph
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NUM LK | P/     | P*     | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | SELECT | CALC   | MYCOMP | MAIL   | RGB HD | RGB HI | P7     | P8     | P9     | -      |        |        | PR SCR | SCR LK | PAUSE  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | PREV   | PLAY   | NEXT   | STOP   | RGB SD | RGB SI | P4     | P5     | P6     | +      |        | RESET  |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | VOL-   | MUTE   | VOL+   | APP    | RGB VD | RGB VI | P1     | P2     | P3     | PENT   |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        | RGB TG | FN     | RGB RMD| RGB MD | P0     |        | P.     | PENT   | PENT   | FN     |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_LW] = { /* LOWERED */
  { ___X___, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  ___X___, ___X___  },
  { _______, MO(_NUM),___X___, ___X___, ___X___, ___X___, ___X___, KC_HOME, KC_UP,   KC_END,  KC_PGUP, ___X___, ___X___, ___X___, ___X___  },
  { _______, KC_LCTL, KC_LSFT, KC_LGUI, KC_LALT, ___X___, ___X___, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, ___X___, ___X___, ___X___, ___X___  },
  { _______, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, _______, ___X___, ___X___, ___X___  },
  { _______, _______, _______, _______, _______, _______, _______, KC_DEL,  ___X___, _______, _______, _______, ___X___, ___X___, ___X___  },
 },

 [_RS] = { /* RAISED */
  { ___X___, ___X___, ___X___, ___X___, ___X___, RGB_HUD, RGB_HUI, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
  { RESET,   KC_CALC, KC_MYCM, ___X___, ___X___, RGB_SAD, RGB_SAI, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
  { KC_MPRV, KC_MPLY, KC_MNXT, ___X___, ___X___, RGB_VAD, RGB_VAI, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
  { KC_VOLD, KC_MUTE, KC_VOLU, ___X___, ___X___, RGB_RMOD,RGB_MOD, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
  { ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, RGB_TOG, ___X___, _______, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
 },

 [_NUM] = { /* NUM PAD */
  { ___X___, ___X___, ___X___, ___X___, ___X___, KC_PSCR, KC_PAUS, KC_NLCK, KC_CAPS, KC_SLCK, KC_SLSH, ___X___, ___X___, ___X___, ___X___   },
  { ___X___, _______, ___X___, ___X___, ___X___, ___X___, ___X___, KC_P7,   KC_P8,   KC_P9,   KC_ASTR, ___X___, ___X___, ___X___, ___X___   },
  { ___X___, _______, _______, _______, _______, ___X___, ___X___, KC_P4,   KC_P5,   KC_P6,   KC_MINS, ___X___, ___X___, ___X___, ___X___   },
  { ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, KC_P1,   KC_P2,   KC_P3,   KC_PLUS, ___X___, ___X___, ___X___, ___X___   },
  { ___X___, ___X___, ___X___, ___X___, _______, _______, ___X___, KC_P0,   KC_PDOT, KC_PENT, ___X___, ___X___, ___X___, ___X___, ___X___   },
 }

 /*
 [_XX] = {
  { ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
  { ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
  { ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
  { ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
  { ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___   },
 }
 */
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
