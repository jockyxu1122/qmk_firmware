/*
  Author: jockyxu1122

  Keymap for Rama M6-A, no LED installed.
  Note that "Previous track" and "next track" might only work with Windows.
*/

#include "../../m6_a.h"

#define MEDIA_LAYER 0
#define PAGE_LAYER 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  -----------------------------------------
  |   Mo(L1)   |  Volume Up  | Play/Pause |
  -----------------------------------------
  | Prev track | Volume Down | Next track |
  -----------------------------------------
  */
  [MEDIA_LAYER] = KEYMAP(
    MO(PAGE_LAYER), KC_VOLU, KC_MPLY, \
    KC_MPRV, KC_VOLD, KC_MNXT
  ),

  /*
  ------------------------
  | TRANS |  Up  | Home  |
  ------------------------
  | Left  | Down | Right |
  -----------------------
  */
  [PAGE_LAYER] = KEYMAP(
    KC_TRNS, KC_UP, KC_HOME, \
    KC_LEFT, KC_DOWN, KC_RIGHT
  )
};

