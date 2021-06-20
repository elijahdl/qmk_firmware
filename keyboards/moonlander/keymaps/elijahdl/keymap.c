/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney <drashna@live.com> (@drashna)
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



#include QMK_KEYBOARD_H
#include "version.h"

//enum layers {
//    0,  // default layer
//    1,  // symbols
//    2,  // media keys
//    3,  // qwerty
//    4,  // desktop
//    5,  // config
//};

enum custom_keycodes {
    VRSN = ML_SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_moonlander(KC_DEL, KC_1, KC_2, KC_3, KC_4, KC_5, TG(3), TG(3), KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, TT(4), MEH_T(KC_NO), KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSLS, KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_G, KC_EQL, KC_MINS, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, LT(1,KC_GRV), LT(2,KC_NO), KC_NO, KC_LEFT, KC_RGHT, KC_ENT, KC_NO, KC_UP, KC_DOWN, KC_NO, LT(2,KC_NO), LT(1,KC_NO), KC_SPC, KC_BSPC, TT(2), TT(1), KC_NO, KC_ENT),
	[1] = LAYOUT_moonlander(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_PGUP, KC_HOME, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_CAPS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_PGDN, KC_END, KC_NO, KC_7, KC_8, KC_9, KC_ASTR, KC_F12, KC_CAPS, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_PLUS, KC_MINS, KC_LT, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_AMPR, KC_1, KC_2, KC_3, KC_SLSH, KC_GT, LT(1,KC_GRV), KC_COMM, KC_LCTL, KC_LGUI, KC_LALT, KC_ENT, KC_TAB, KC_0, KC_BSLS, KC_DOT, KC_EQL, LT(1,KC_NO), KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO),
	[2] = LAYOUT_moonlander(KC_NO, KC_WH_L, KC_TRNS, KC_WH_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, KC_TRNS, LT(2,KC_NO), KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_D, KC_WH_U, KC_TRNS, LT(2,KC_NO), KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_MPLY, TO(5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS, TO(5), TO(3), KC_NO, KC_BTN3, KC_BTN2, KC_BTN1, KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, TO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_moonlander(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRNS, KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO, KC_NO, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_TRNS, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RALT, KC_RGUI, KC_TRNS, KC_SPC, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_ENT),
	[4] = LAYOUT_moonlander(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[5] = LAYOUT_moonlander(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET, BL_INC, RGB_HUI, RGB_SAI, RGB_SPI, RGB_MOD, BL_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_DEC, RGB_HUD, RGB_SAD, RGB_SPD, RGB_RMOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
        case VRSN:
            SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
            return false;
        }
    }
    return true;
}
