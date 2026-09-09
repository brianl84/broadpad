#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_F13,  // SW1
        KC_F14,  // SW2
        KC_F15,  // SW3
        KC_F16,  // SW4
        KC_F17,  // SW5
        KC_F18,  // SW6
        KC_F19,  // SW7
        KC_F20,  // SW8
        KC_F21,  // SW9
        KC_F22   // SW10
    )
};