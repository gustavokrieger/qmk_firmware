#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
};

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
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F12,         KC_NO,          KC_NO,          KC_MINUS,       KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_QUOTE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_ALT,    KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_NO,          
                                                    KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_NO,          KC_NO,          KC_NO,          KC_F11,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_HOME,        KC_PAGE_UP,     KC_PGDN,        KC_END,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_RIGHT_ALT,   KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_GUI,   KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT
  ),
    // clang-format on
};

const uint16_t PROGMEM combo0[]  = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo1[]  = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo2[]  = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo3[]  = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo4[]  = {KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo5[]  = {KC_J, KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo6[]  = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM combo7[]  = {KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM combo8[]  = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo9[]  = {KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM combo10[] = {KC_A, KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo11[] = {KC_A, KC_S, KC_D, KC_F, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_RIGHT_SHIFT), COMBO(combo1, KC_RIGHT_CTRL), COMBO(combo2, KC_RIGHT_GUI), COMBO(combo3, RCTL(KC_RIGHT_SHIFT)), COMBO(combo4, RGUI(KC_RIGHT_CTRL)), COMBO(combo5, RGUI(RCTL(KC_RIGHT_SHIFT))), COMBO(combo6, KC_LEFT_SHIFT), COMBO(combo7, KC_LEFT_CTRL), COMBO(combo8, KC_LEFT_GUI), COMBO(combo9, LCTL(KC_LEFT_SHIFT)), COMBO(combo10, LGUI(KC_LEFT_CTRL)), COMBO(combo11, LGUI(LCTL(KC_LEFT_SHIFT))),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}
