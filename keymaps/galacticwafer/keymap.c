// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _QWERTY   0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = ortho_7x7 (
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,    KC_F6,    /**/   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,     KC_SLCK,  /**/   KC_SLCK, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR,
    KC_MINS, KC_Q,    KC_W,    KC_F,    KC_P,   KC_B,     KC_TAB,   /**/   KC_BSLS, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_EQL,
    KC_INS,  KC_A,    KC_R,    KC_S,    KC_T,   KC_G,     KC_LBRC,  /**/   KC_RBRC, KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
    KC_CAPS, KC_Z,    KC_X,    KC_C,    KC_D,   KC_V,               /**/            KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_NLCK,
             KC_APP,           KC_LSFT,         KC_BSPC,  KC_LGUI,  /**/   KC_RGUI, KC_SPC,  KC_RSFT,                            KC_ENT,
    KC_NO,   KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_LCTL,  KC_LALT,  /**/   KC_RALT, KC_RCTL, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, KC_NO
),
};
