/*
  Author: jockyxu1122

  Keymap for Rama M6-A, no LED installed.
*/

#include "../../m6_a.h"

enum custom_keycords {
  LEFT_WORKSPACE,
  MAC_OS_SLEEP,
  MISSION_CONTROL,
  RIGHT_WORKSPACE,
  VIEW_ALL_WINDOWS,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      case LEFT_WORKSPACE:
        SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_LEFT)SS_UP(X_LCTRL));
        return false;
      case MAC_OS_SLEEP:
        SEND_STRING(
            SS_DOWN(X_LCTRL)SS_DOWN(X_LSHIFT)SS_TAP(X_POWER)SS_UP(X_LSHIFT)SS_UP(X_LCTRL));
        return false;
      case MISSION_CONTROL:
        SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_UP)SS_UP(X_LCTRL));
        return false;
      case RIGHT_WORKSPACE:
        SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_RIGHT)SS_UP(X_LCTRL));
        return false;
      case VIEW_ALL_WINDOWS:
        SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_DOWN)SS_UP(X_LCTRL));
        return false;
    }
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  ---------------------------------------------------------------------
  |     MO(L1)     |         MISSON CONTROL         |   MAC OS SLEEP  |
  ---------------------------------------------------------------------
  | LEFT WORKSPACE | VIEW ALL WINDOWS IN CURRENT APP| RIGHT WORKSPACE |
  ---------------------------------------------------------------------
  */
  [0] = LAYOUT(
    MO(1), MISSION_CONTROL, MAC_OS_SLEEP, \
    LEFT_WORKSPACE, VIEW_ALL_WINDOWS, RIGHT_WORKSPACE
  ),
  /*
  ------------------------------------------
  |    TRANS    |  VOLUME UP  | PLAY/PAUSE |
  ------------------------------------------
  | PREV TRACK  | VOLUME Down | NEXT TRACK |
  ------------------------------------------
  */
  [1] = LAYOUT(
    KC_TRNS, KC__VOLUP, KC_MEDIA_PLAY_PAUSE, \
    KC_MEDIA_REWIND, KC__VOLDOWN, KC_MEDIA_FAST_FORWARD
  )
};

