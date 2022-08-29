#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_donut(
                KC_A,
        KC_B,           KC_C,
        KC_D,           KC_E,
                KC_F
    ),
    [1] = LAYOUT_donut(
                KC_A,
        KC_B,           KC_C,
        KC_D,           KC_E,
                KC_F
    ),
    [2] = LAYOUT_donut(
                KC_A,
        KC_B,           KC_C,
        KC_D,           KC_E,
                KC_F
    ),
    [3] = LAYOUT_donut(
                KC_A,
        KC_B,           KC_C,
        KC_D,           KC_E,
                KC_F
    )
};
