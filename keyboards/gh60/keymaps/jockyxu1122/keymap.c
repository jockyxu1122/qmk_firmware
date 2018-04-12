/*
  Author: jockyxu1122

  Note that "previous track" and "next track" might only work with Windows.
*/

#include "gh60.h"
#include "action_layer.h"

#define DEFAULT_LAYER 0
#define LAYER_1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  -------------------------------------------------------------
  |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | ` |Del|
  -------------------------------------------------------------
  | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |BckSp|
  -------------------------------------------------------------
  | Caps | A | S | D | F | G | H | J | K | L | ; | ' |  Enter |
  -------------------------------------------------------------
  | Shift  | Z | X | C | V | B | N | M | , | . | / | Shift| \ |
  -------------------------------------------------------------
        |Alt|MoL1|         Space          | Ctrl|GUI|
        ---------------------------------------------
  */
  [DEFAULT_LAYER] = KEYMAP_HHKB(
    // row 1
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, \
      KC_DEL, \
    // row 2
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC, \
    // row 3
    KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, \
    // row 4
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_BSLS, \
    // row 5
    KC_NO, KC_LALT, MO(LAYER_1), KC_SPC, KC_RCTL, KC_LGUI, KC_NO, KC_NO
  ),

  /*
  -------------------------------------------------------------
  |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |Ins|
  -------------------------------------------------------------
  |     |Hom| Up|End|   |   |   |   |   |   |   |VDn|VUp|     |
  -------------------------------------------------------------
  |      |<--|Dwn|-->|   |   |   |   |   | @ |   |   |        |
  -------------------------------------------------------------
  |        |   |   |Cal|   |www|   |Mut|PTk|NTk|   |      |   |
  -------------------------------------------------------------
        |   |    |         Pause          |     |   |
        ---------------------------------------------
  */
  [LAYER_1] = KEYMAP_HHKB(
    // row 1
    KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, \
      KC_F12, KC_TRNS, KC_INS, \
    // row 2
    KC_TRNS, KC_HOME, KC_UP, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
      KC_TRNS, KC_VOLD, KC_VOLU, KC_TRNS, \
    // row 3
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MAIL, \
      KC_TRNS, KC_TRNS, KC_TRNS, \
    // row 4
    KC_TRNS, KC_TRNS, KC_TRNS, KC_CALC, KC_TRNS, KC_WHOM, KC_TRNS, KC_MUTE, KC_MPRV, KC_MNXT, \
      KC_TRNS, KC_TRNS, KC_TRNS, \
    // row 5
    KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};
