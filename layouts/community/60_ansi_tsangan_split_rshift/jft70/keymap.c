#include QMK_KEYBOARD_H

#define CAPSLCK LCTL_T(KC_ESC)
#define SPC_FN2 LT(2, KC_SPC)
#define CTL_LFT C(KC_LEFT)
#define CTL_RGT C(KC_RGHT)

//#define RGB_MOD RGB_MODE_REVERSE
//#define RGB_MOI RGB_MODE_FORWARD
#define ___T___ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │Esc/Ct│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │Shift │TG3│
     * ├─────┬──┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬───┬─┴───┤
     * │Ctrl │Alt│ GUI │         Space Fn2         │ Alt │MO1│ Ctrl│
     * └─────┴───┴─────┴───────────────────────────┴─────┴───┴─────┘
     */
    [0] = LAYOUT_60_ansi_tsangan_split_rshift(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        CAPSLCK, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, TG(3),
        KC_LCTL, KC_LALT, KC_LGUI,                           SPC_FN2,                                      KC_RALT, MO(1),   KC_RCTL
    ),

    [1] = LAYOUT_60_ansi_tsangan_split_rshift(
        ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___,
        ___T___, ___T___, RGB_VAI, ___T___, RGB_HUI, RGB_SAI, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, QK_BOOT,
        RGB_TOG, RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___,          ___T___,
        BL_TOGG,          BL_DOWN, BL_STEP,   BL_UP, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___,
        ___T___, ___T___, ___T___,                            KC_MPLY,                                     ___T___, ___T___, ___T___
    ),

    [2] = LAYOUT_60_ansi_tsangan_split_rshift(
        ___T___, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        ___T___, ___T___, CTL_LFT, KC_END,  ___T___, ___T___, ___T___, ___T___, KC_PGUP, KC_PGDN, ___T___, ___T___, ___T___, ___T___,
        ___T___, KC_HOME, ___T___, ___T___, ___T___, ___T___, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ___T___, ___T___,          ___T___,
        ___T___,          ___T___, ___T___, ___T___, ___T___, CTL_RGT, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___,
        ___T___, ___T___, ___T___,                            ___T___,                                     ___T___, ___T___, ___T___
    ),

    [3] = LAYOUT_60_ansi_tsangan_split_rshift(
        ___T___, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  ___T___,
        ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___,
        ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___,          ___T___,
        ___T___,          ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, ___T___, KC_UP,   ___T___,
        ___T___, ___T___, ___T___,                            ___T___,                                     KC_LEFT, KC_DOWN, KC_RGHT
     )
};
