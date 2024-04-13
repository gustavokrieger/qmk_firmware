#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"
#include "config.h"

#define MOON_LED_LEVEL LED_LEVEL

const enum qk_keycode_ranges MT_LP = LALT_T(KC_Z);
const enum qk_keycode_ranges MT_LR = LCTL_T(KC_X);
const enum qk_keycode_ranges MT_LM = LSFT_T(KC_C);
const enum qk_keycode_ranges MT_LI = LGUI_T(KC_V);

#define KC_Z MT_LP
#define KC_X MT_LR
#define KC_C MT_LM
#define KC_V MT_LI

const enum qk_keycode_ranges MT_RI = RGUI_T(KC_M);
const enum qk_keycode_ranges MT_RM = RSFT_T(KC_COMMA);
const enum qk_keycode_ranges MT_RR = RCTL_T(KC_DOT);
const enum qk_keycode_ranges MT_RP = RALT_T(KC_SLASH);

#define KC_M MT_RI
#define KC_COMMA MT_RM
#define KC_DOT MT_RR
#define KC_SLASH MT_RP

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
  [0] = LAYOUT_voyager(
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_DELETE,      
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_ENTER,       
    KC_NO,          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_CAPS,        
                                                    KC_SPACE,       TO(1),                                          TO(2),          KC_BSPC
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F12,         KC_NO,          KC_MINUS,       KC_EQUAL,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_QUOTE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_NO,          
                                                    KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_F11,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_HOME,        KC_PAGE_UP,     KC_PGDN,        KC_END,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT
  ),
    // clang-format on
};

const uint16_t PROGMEM combo0[]  = {MT_LR, MT_LM, COMBO_END};
const uint16_t PROGMEM combo1[]  = {MT_LM, MT_LI, COMBO_END};
const uint16_t PROGMEM combo2[]  = {MT_LM, MT_LP, COMBO_END};
const uint16_t PROGMEM combo3[]  = {MT_LR, MT_LI, COMBO_END};
const uint16_t PROGMEM combo4[]  = {MT_LR, MT_LP, COMBO_END};
const uint16_t PROGMEM combo5[]  = {MT_LP, MT_LI, COMBO_END};
const uint16_t PROGMEM combo6[]  = {MT_RM, MT_RR, COMBO_END};
const uint16_t PROGMEM combo7[]  = {MT_RM, MT_RI, COMBO_END};
const uint16_t PROGMEM combo8[]  = {MT_RM, MT_RP, COMBO_END};
const uint16_t PROGMEM combo9[]  = {MT_RR, MT_RI, COMBO_END};
const uint16_t PROGMEM combo10[] = {MT_RR, MT_RP, COMBO_END};
const uint16_t PROGMEM combo11[] = {MT_RI, MT_RP, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LSFT(KC_LEFT_CTRL)),  //
    COMBO(combo1, LSFT(KC_LEFT_GUI)),   //
    COMBO(combo2, LSFT(KC_LEFT_ALT)),   //
    COMBO(combo3, LCTL(KC_LEFT_GUI)),   //
    COMBO(combo4, LCTL(KC_LEFT_ALT)),   //
    COMBO(combo5, LALT(KC_LEFT_GUI)),   //
    COMBO(combo6, RSFT(KC_RIGHT_CTRL)), //
    COMBO(combo7, RSFT(KC_RIGHT_GUI)),  //
    COMBO(combo8, RSFT(KC_RIGHT_ALT)),  //
    COMBO(combo9, RCTL(KC_RIGHT_GUI)),  //
    COMBO(combo10, RCTL(KC_RIGHT_ALT)), //
    COMBO(combo11, RALT(KC_RIGHT_GUI)), //
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    // debug_enable = true;
    // debug_matrix = true;
    // debug_keyboard = true;

    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [1] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}},

    [2] = {{63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) {
        return false;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
    return true;
}

uint16_t pending = KC_NO;
uint16_t taps[10];
int      taps_size = 0;
bool     modding   = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    dprint("-------------------------------------\n");
    dprintf("key: 0x%04X, pressed: %d", keycode, record->event.pressed);
    dprint(" - process_record_user\n");

    if (IS_QK_TO(keycode)) {
        dprint("IS_QK_TO\n");
        return true;
    }

    if (modding) {
        dprint("do nothing since it is modding\n");
        return true;
    }

    if (!record->event.pressed) {
        dprint("released\n");
        if (pending != KC_NO && taps_size != 0 && !IS_QK_MOD_TAP(keycode)) {
            dprint("normal key released, tapping pending mod and normal taps\n");
            tap_code(pending);
            pending = KC_NO;
            for (int i = 0; i < taps_size; i++) {
                tap_code(taps[i]);
            }
            taps_size = 0;
        }
        return true;
    }

    if (get_mods() == 0) {
        switch (keycode) {
            case KC_NO ... KC_0:
            case KC_ENTER:
            case KC_ESCAPE:
            case KC_BACKSPACE:
            case KC_SPACE:
            case KC_TAB:
            case KC_DELETE:
            case KC_SEMICOLON:
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
                dprint("clearing layer\n");
                layer_clear();
        }
    }

    if (pending != KC_NO) {
        switch (pending) {
            case MT_LP:
            case MT_LR:
            case MT_LM:
            case MT_LI:
                switch (keycode) {
                    case KC_6:
                    case KC_7:
                    case KC_8:
                    case KC_9:
                    case KC_0:
                    case KC_Y:
                    case KC_U:
                    case KC_I:
                    case KC_O:
                    case KC_P:
                    case KC_DELETE:
                    case KC_H:
                    case KC_J:
                    case KC_K:
                    case KC_L:
                    case KC_SCLN:
                    case KC_ENTER:
                    case KC_N:
                    case KC_M:
                    case KC_COMMA:
                    case KC_DOT:
                    case KC_SLASH:
                    case KC_CAPS:
                    case KC_BSPC:
                        dprint("handling key normally since it is a bilateral combination\n");
                        modding = true;
                        return true;
                }
        }
        switch (pending) {
            case MT_RI:
            case MT_RM:
            case MT_RR:
            case MT_RP:
                switch (keycode) {
                    case KC_1:
                    case KC_2:
                    case KC_3:
                    case KC_4:
                    case KC_5:
                    case KC_TAB:
                    case KC_Q:
                    case KC_W:
                    case KC_E:
                    case KC_R:
                    case KC_T:
                    case KC_ESCAPE:
                    case KC_A:
                    case KC_S:
                    case KC_D:
                    case KC_F:
                    case KC_G:
                    case KC_Z:
                    case KC_X:
                    case KC_C:
                    case KC_V:
                    case KC_B:
                    case KC_SPACE:
                        dprint("handling key normally since it is a bilateral combination\n");
                        modding = true;
                        return true;
                }
        }
        dprint("adding key to pending since it is not a bilateral combination\n");
        clear_mods();
        taps[taps_size] = keycode;
        taps_size++;
        return false;
    }

    if (IS_QK_MOD_TAP(keycode)) {
        dprint("pending mod\n");
        pending = keycode;
    }

    return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    dprintf("key: 0x%04X, pressed: %d", keycode, record->event.pressed);
    dprint(" - post_process_record_user\n");

    if (IS_QK_TO(keycode)) {
        dprint("IS_QK_TO\n");
        return;
    }

    if (record->event.pressed) {
        dprint("do nothing since it is a press\n");
        return;
    }

    if (pending == keycode) {
        dprint("clear pending and modding, resolving non-mod pending taps\n");
        pending = KC_NO;
        modding = false;
        for (int i = 0; i < taps_size; i++) {
            tap_code(taps[i]);
        }
        taps_size = 0;
    }

    if (modding) {
        dprint("modding\n");
        return;
    }

    if (get_mods() == 0 && IS_MODIFIER_KEYCODE(keycode)) {
        dprint("clearing layer\n");
        layer_clear();
    }

    if (pending != KC_NO && taps_size != 0) {
        dprint("resolving non-mod pendind taps\n");
        pending = KC_NO;
        for (int i = 0; i < taps_size; i++) {
            tap_code(taps[i]);
        }
        taps_size = 0;
    }
}
