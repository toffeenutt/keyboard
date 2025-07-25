// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
enum layers {BASE, NUM, NAV, FUN};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        MO(NUM), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                 KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                                            KC_LALT, KC_LSFT, KC_LGUI,            KC_RSFT, LT(NUM, KC_SPC),  MO(NAV)
    ),
    [NUM] = LAYOUT_split_3x6_3(
       	KC_ESC,  KC_GRV,  _______, _______, _______, _______,                              KC_BSPC, KC_7,    KC_8,    KC_9,    KC_LBRC, KC_RBRC,
        _______, MO(FUN), _______, _______, _______, _______,                              KC_DEL,  KC_4,    KC_5,    KC_6,    KC_MINS, KC_EQL,
        _______, _______, _______, _______, _______, _______,                              KC_0,    KC_1,    KC_2,    KC_3,    _______, _______,
                                            _______, _______, _______,            _______, KC_SPC,  KC_RALT
    ),
    [NAV] = LAYOUT_split_3x6_3(
        KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              KC_BSPC, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP, KC_UP, KC_RGHT, KC_PGUP,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              KC_DEL,  KC_HOME, KC_LEFT, KC_DOWN, KC_AUDIO_VOL_UP, KC_PGDN,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              KC_INS,  KC_END,  KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, LGUI(KC_L), _______,
                                            _______, _______, _______,           _______,  XXXXXXX, XXXXXXX
    ),
    [FUN] = LAYOUT_split_3x6_3(
       	XXXXXXX, XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F12,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F10,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                            _______, _______, _______,            _______, XXXXXXX, XXXXXXX
    ),
};

