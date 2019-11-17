/* Copyright 2019 Yida <jockyxu1122@gmail.com>
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

#define FUNCTION_LAYER 1
#define MUSIC_READY_LAYER 2
#define TYPING_LAYER 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Layer 0 (Typing layer)
 * ,-----------------------------------------------------------------------------------.
 * |  Fn  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   +  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |   -  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Shift|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | Enter|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Caps |  Alt |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   '  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  Cmd |   /  |  Esc |   space     |  backspace  |   [  |   ]  |   \  |   `  \
 * `-----------------------------------------------------------------------------------'
 */
    [TYPING_LAYER] = LAYOUT_preonic_2x2u(\
            MO(FUNCTION_LAYER), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL,\
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS,\
            KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENTER,\
            KC_LCAP, KC_LALT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_QUOT,\
            KC_LCTL, KC_LGUI, KC_SLSH, KC_ESC, KC_SPACE, KC_BSPC, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRAVE),

/* Layer 1 (Function layer)
 * ,-----------------------------------------------------------------------------------.
 * |  xD  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | VolUp|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F11 |  F12 |      |      |      | Home | PgUp | PgDn |  End |      | VolDn|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      | Left | Down |  Up  | Right|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | Mute | Prvs | Next | Pl/Ps|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |AdTggl|      |      | Raise|             |    Delete   |      |      |      |      \
 * `-----------------------------------------------------------------------------------'
 */
    [FUNCTION_LAYER] = LAYOUT_preonic_2x2u(\
            _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC__VOLUP,\
            XXXXXXX, KC_F11, KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP, KC_PGDN, KC_END, XXXXXXX, KC__VOLDOWN,\
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,\
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC__MUTE, KC_MRWD, KC_MFFD, KC_MPLY,\
            AU_TOG, XXXXXXX, XXXXXXX, TG(MUSIC_READY_LAYER), XXXXXXX, KC_DEL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

/* Layer 2 (Music-ready Layer)
 * ,-----------------------------------------------------------------------------------.
 * | Sound|      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |In/Out|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |Layer0|             |             |      |      |      |      \
 * `-----------------------------------------------------------------------------------'
 */
    [MUSIC_READY_LAYER] = LAYOUT_preonic_2x2u(\
            MU_MOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MU_TOG,\
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
            XXXXXXX, XXXXXXX, XXXXXXX, TG(MUSIC_READY_LAYER), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX) 
};
