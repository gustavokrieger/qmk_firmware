#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"
#define MOON_LED_LEVEL LED_LEVEL

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
  [0] = LAYOUT_voyager(
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_DELETE,      
    KC_ESCAPE,      MT(MOD_LGUI, KC_A),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_LALT, KC_F),KC_G,                                           KC_H,           MT(MOD_RALT, KC_J),MT(MOD_RSFT, KC_K),MT(MOD_RCTL, KC_L),MT(MOD_RGUI, KC_SCLN),KC_ENTER,       
    KC_NO,          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_CAPS,        
                                                    KC_SPACE,       TO(1),                                          TO(2),          KC_BSPC
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F12,         KC_NO,          KC_MINUS,       KC_EQUAL,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_QUOTE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_ALT,    KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_NO,          
                                                    KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_F11,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_HOME,        KC_PAGE_UP,     KC_PGDN,        KC_END,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_RIGHT_ALT,   KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_GUI,   KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT
  ),
    // clang-format on
};

const uint16_t PROGMEM combo0[]  = {MT(MOD_LCTL, KC_S), MT(MOD_LSFT, KC_D), COMBO_END};
const uint16_t PROGMEM combo1[]  = {MT(MOD_LSFT, KC_D), MT(MOD_LALT, KC_F), COMBO_END};
const uint16_t PROGMEM combo2[]  = {MT(MOD_LSFT, KC_D), MT(MOD_LGUI, KC_A), COMBO_END};
const uint16_t PROGMEM combo3[]  = {MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_F), COMBO_END};
const uint16_t PROGMEM combo4[]  = {MT(MOD_LCTL, KC_S), MT(MOD_LGUI, KC_A), COMBO_END};
const uint16_t PROGMEM combo5[]  = {MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_F), COMBO_END};
const uint16_t PROGMEM combo6[]  = {MT(MOD_RSFT, KC_K), MT(MOD_RCTL, KC_L), COMBO_END};
const uint16_t PROGMEM combo7[]  = {MT(MOD_RSFT, KC_K), MT(MOD_RALT, KC_J), COMBO_END};
const uint16_t PROGMEM combo8[]  = {MT(MOD_RSFT, KC_K), MT(MOD_RGUI, KC_SCLN), COMBO_END};
const uint16_t PROGMEM combo9[]  = {MT(MOD_RCTL, KC_L), MT(MOD_RALT, KC_J), COMBO_END};
const uint16_t PROGMEM combo10[] = {MT(MOD_RCTL, KC_L), MT(MOD_RGUI, KC_SCLN), COMBO_END};
const uint16_t PROGMEM combo11[] = {MT(MOD_RALT, KC_J), MT(MOD_RGUI, KC_SCLN), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LSFT(KC_LEFT_CTRL)), COMBO(combo1, LSFT(KC_LEFT_ALT)), COMBO(combo2, LSFT(KC_LEFT_GUI)), COMBO(combo3, LCTL(KC_LEFT_ALT)), COMBO(combo4, LCTL(KC_LEFT_GUI)), COMBO(combo5, LALT(KC_LEFT_GUI)), COMBO(combo6, LSFT(KC_RIGHT_CTRL)), COMBO(combo7, LSFT(KC_RIGHT_ALT)), COMBO(combo8, LSFT(KC_RIGHT_GUI)), COMBO(combo9, LCTL(KC_RIGHT_ALT)), COMBO(combo10, LCTL(KC_RIGHT_GUI)), COMBO(combo11, LALT(KC_RIGHT_GUI)),
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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    dprintf("pressed: %d, key: 0x%04X - ", record->event.pressed, keycode);
    dprintf("process_record_user\n");

    if (record->event.pressed && get_mods() == 0) {
        switch (keycode) {
            case KC_A ... KC_0:
            case KC_ENTER:
            case KC_ESCAPE:
            case KC_BACKSPACE:
            case KC_SPACE:
            case KC_TAB:
            case KC_DELETE:
            case KC_SEMICOLON:
            case KC_COMMA:
            case KC_DOT:
            case KC_SLASH:
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
                layer_clear();
        }
    }
    return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    dprintf("pressed: %d, key: 0x%04X - ", record->event.pressed, keycode);
    dprintf("post_process_record_user\n");

    if (!record->event.pressed && get_mods() == 0 && IS_MODIFIER_KEYCODE(keycode)) {
        layer_clear();
    }
}
