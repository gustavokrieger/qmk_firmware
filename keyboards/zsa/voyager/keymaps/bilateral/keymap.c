#include QMK_KEYBOARD_H
#include "bitwise.h"
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#    define ZSA_SAFE_RANGE SAFE_RANGE
#endif
#define KC_RHYPR RCSG(KC_LALT)

enum custom_keycodes {
    RGB_SLD = ZSA_SAFE_RANGE,
    LEFT,
    RIGHT,
};

#define LEFT_CTRL_ALT LCTL(LALT(KC_NO))
#define LEFT_CTRL_SHIFT LCTL(LSFT(KC_NO))
#define LEFT_CTRL_SHIFT_ALT LCTL(LSFT(LALT(KC_NO)))
#define LEFT_GUI_ALT LGUI(LALT(KC_NO))
#define LEFT_GUI_CTRL LGUI(LCTL(KC_NO))
#define LEFT_GUI_CTRL_ALT LGUI(LCTL(LALT(KC_NO)))
#define LEFT_GUI_CTRL_SHIFT LGUI(LCTL(LSFT(KC_NO)))
#define LEFT_GUI_SHIFT LGUI(LSFT(KC_NO))
#define LEFT_GUI_SHIFT_ALT LGUI(LSFT(LALT(KC_NO)))
#define LEFT_SHIFT_ALT LSFT(LALT(KC_NO))
#define RIGHT_CTRL_ALT RCTL(RALT(KC_NO))
#define RIGHT_CTRL_SHIFT RCTL(RSFT(KC_NO))
#define RIGHT_CTRL_SHIFT_ALT RCTL(RSFT(RALT(KC_NO)))
#define RIGHT_GUI_ALT RGUI(RALT(KC_NO))
#define RIGHT_GUI_CTRL RGUI(RCTL(KC_NO))
#define RIGHT_GUI_CTRL_ALT RGUI(RCTL(RALT(KC_NO)))
#define RIGHT_GUI_CTRL_SHIFT RGUI(RCTL(RSFT(KC_NO)))
#define RIGHT_GUI_SHIFT RGUI(RSFT(KC_NO))
#define RIGHT_GUI_SHIFT_ALT RGUI(RSFT(RALT(KC_NO)))
#define RIGHT_SHIFT_ALT RSFT(RALT(KC_NO))

enum combos {
    LEFT_ALT_COMBO,
    LEFT_CTRL_ALT_COMBO,
    LEFT_CTRL_COMBO,
    LEFT_CTRL_SHIFT_ALT_COMBO,
    LEFT_CTRL_SHIFT_COMBO,
    LEFT_GUI_ALT_COMBO,
    LEFT_GUI_COMBO,
    LEFT_GUI_CTRL_ALT_COMBO,
    LEFT_GUI_CTRL_COMBO,
    LEFT_GUI_CTRL_SHIFT_COMBO,
    LEFT_GUI_SHIFT_ALT_COMBO,
    LEFT_GUI_SHIFT_COMBO,
    LEFT_SHIFT_ALT_COMBO,
    LEFT_SHIFT_COMBO,
    RIGHT_ALT_COMBO,
    RIGHT_CTRL_ALT_COMBO,
    RIGHT_CTRL_COMBO,
    RIGHT_CTRL_SHIFT_ALT_COMBO,
    RIGHT_CTRL_SHIFT_COMBO,
    RIGHT_GUI_ALT_COMBO,
    RIGHT_GUI_COMBO,
    RIGHT_GUI_CTRL_ALT_COMBO,
    RIGHT_GUI_CTRL_COMBO,
    RIGHT_GUI_CTRL_SHIFT_COMBO,
    RIGHT_GUI_SHIFT_ALT_COMBO,
    RIGHT_GUI_SHIFT_COMBO,
    RIGHT_SHIFT_ALT_COMBO,
    RIGHT_SHIFT_COMBO,
};

static const uint16_t PROGMEM left_alt_combo[]             = {KC_Z, KC_HYPR, COMBO_END};
static const uint16_t PROGMEM left_ctrl_alt_combo[]        = {KC_C, KC_Z, COMBO_END};
static const uint16_t PROGMEM left_ctrl_combo[]            = {KC_C, KC_X, COMBO_END};
static const uint16_t PROGMEM left_ctrl_shift_alt_combo[]  = {KC_C, KC_X, KC_Z, KC_HYPR, COMBO_END};
static const uint16_t PROGMEM left_ctrl_shift_combo[]      = {KC_C, KC_X, KC_Z, COMBO_END};
static const uint16_t PROGMEM left_gui_alt_combo[]         = {KC_V, KC_Z, COMBO_END};
static const uint16_t PROGMEM left_gui_combo[]             = {KC_V, KC_C, COMBO_END};
static const uint16_t PROGMEM left_gui_ctrl_alt_combo[]    = {KC_V, KC_C, KC_Z, COMBO_END};
static const uint16_t PROGMEM left_gui_ctrl_combo[]        = {KC_V, KC_C, KC_X, COMBO_END};
static const uint16_t PROGMEM left_gui_ctrl_shift_combo[]  = {KC_V, KC_C, KC_X, KC_Z, COMBO_END};
static const uint16_t PROGMEM left_gui_shift_alt_combo[]   = {KC_V, KC_X, KC_Z, COMBO_END};
static const uint16_t PROGMEM left_gui_shift_combo[]       = {KC_V, KC_X, COMBO_END};
static const uint16_t PROGMEM left_shift_alt_combo[]       = {KC_X, KC_Z, KC_HYPR, COMBO_END};
static const uint16_t PROGMEM left_shift_combo[]           = {KC_X, KC_Z, COMBO_END};
static const uint16_t PROGMEM right_alt_combo[]            = {KC_SLASH, KC_RHYPR, COMBO_END};
static const uint16_t PROGMEM right_ctrl_alt_combo[]       = {KC_COMMA, KC_SLASH, COMBO_END};
static const uint16_t PROGMEM right_ctrl_combo[]           = {KC_COMMA, KC_DOT, COMBO_END};
static const uint16_t PROGMEM right_ctrl_shift_alt_combo[] = {KC_COMMA, KC_DOT, KC_SLASH, KC_RHYPR, COMBO_END};
static const uint16_t PROGMEM right_ctrl_shift_combo[]     = {KC_COMMA, KC_DOT, KC_SLASH, COMBO_END};
static const uint16_t PROGMEM right_gui_alt_combo[]        = {KC_M, KC_SLASH, COMBO_END};
static const uint16_t PROGMEM right_gui_combo[]            = {KC_M, KC_COMMA, COMBO_END};
static const uint16_t PROGMEM right_gui_ctrl_alt_combo[]   = {KC_M, KC_COMMA, KC_SLASH, COMBO_END};
static const uint16_t PROGMEM right_gui_ctrl_combo[]       = {KC_M, KC_COMMA, KC_DOT, COMBO_END};
static const uint16_t PROGMEM right_gui_ctrl_shift_combo[] = {KC_M, KC_COMMA, KC_DOT, KC_SLASH, COMBO_END};
static const uint16_t PROGMEM right_gui_shift_alt_combo[]  = {KC_M, KC_DOT, KC_SLASH, COMBO_END};
static const uint16_t PROGMEM right_gui_shift_combo[]      = {KC_M, KC_DOT, COMBO_END};
static const uint16_t PROGMEM right_shift_alt_combo[]      = {KC_DOT, KC_SLASH, KC_RHYPR, COMBO_END};
static const uint16_t PROGMEM right_shift_combo[]          = {KC_DOT, KC_SLASH, COMBO_END};

combo_t key_combos[] = {
    [LEFT_ALT_COMBO]             = COMBO(left_alt_combo, KC_LEFT_ALT),
    [LEFT_CTRL_ALT_COMBO]        = COMBO(left_ctrl_alt_combo, LEFT_CTRL_ALT),
    [LEFT_CTRL_COMBO]            = COMBO(left_ctrl_combo, KC_LEFT_CTRL),
    [LEFT_CTRL_SHIFT_ALT_COMBO]  = COMBO(left_ctrl_shift_alt_combo, LEFT_CTRL_SHIFT_ALT),
    [LEFT_CTRL_SHIFT_COMBO]      = COMBO(left_ctrl_shift_combo, LEFT_CTRL_SHIFT),
    [LEFT_GUI_ALT_COMBO]         = COMBO(left_gui_alt_combo, LEFT_GUI_ALT),
    [LEFT_GUI_COMBO]             = COMBO(left_gui_combo, KC_LEFT_GUI),
    [LEFT_GUI_CTRL_ALT_COMBO]    = COMBO(left_gui_ctrl_alt_combo, LEFT_GUI_CTRL_ALT),
    [LEFT_GUI_CTRL_COMBO]        = COMBO(left_gui_ctrl_combo, LEFT_GUI_CTRL),
    [LEFT_GUI_CTRL_SHIFT_COMBO]  = COMBO(left_gui_ctrl_shift_combo, LEFT_GUI_CTRL_SHIFT),
    [LEFT_GUI_SHIFT_ALT_COMBO]   = COMBO(left_gui_shift_alt_combo, LEFT_GUI_SHIFT_ALT),
    [LEFT_GUI_SHIFT_COMBO]       = COMBO(left_gui_shift_combo, LEFT_GUI_SHIFT),
    [LEFT_SHIFT_ALT_COMBO]       = COMBO(left_shift_alt_combo, LEFT_SHIFT_ALT),
    [LEFT_SHIFT_COMBO]           = COMBO(left_shift_combo, KC_LEFT_SHIFT),
    [RIGHT_ALT_COMBO]            = COMBO(right_alt_combo, KC_RIGHT_ALT),
    [RIGHT_CTRL_ALT_COMBO]       = COMBO(right_ctrl_alt_combo, RIGHT_CTRL_ALT),
    [RIGHT_CTRL_COMBO]           = COMBO(right_ctrl_combo, KC_RIGHT_CTRL),
    [RIGHT_CTRL_SHIFT_ALT_COMBO] = COMBO(right_ctrl_shift_alt_combo, RIGHT_CTRL_SHIFT_ALT),
    [RIGHT_CTRL_SHIFT_COMBO]     = COMBO(right_ctrl_shift_combo, RIGHT_CTRL_SHIFT),
    [RIGHT_GUI_ALT_COMBO]        = COMBO(right_gui_alt_combo, RIGHT_GUI_ALT),
    [RIGHT_GUI_COMBO]            = COMBO(right_gui_combo, KC_RIGHT_GUI),
    [RIGHT_GUI_CTRL_ALT_COMBO]   = COMBO(right_gui_ctrl_alt_combo, RIGHT_GUI_CTRL_ALT),
    [RIGHT_GUI_CTRL_COMBO]       = COMBO(right_gui_ctrl_combo, RIGHT_GUI_CTRL),
    [RIGHT_GUI_CTRL_SHIFT_COMBO] = COMBO(right_gui_ctrl_shift_combo, RIGHT_GUI_CTRL_SHIFT),
    [RIGHT_GUI_SHIFT_ALT_COMBO]  = COMBO(right_gui_shift_alt_combo, RIGHT_GUI_SHIFT_ALT),
    [RIGHT_GUI_SHIFT_COMBO]      = COMBO(right_gui_shift_combo, RIGHT_GUI_SHIFT),
    [RIGHT_SHIFT_ALT_COMBO]      = COMBO(right_shift_alt_combo, RIGHT_SHIFT_ALT),
    [RIGHT_SHIFT_COMBO]          = COMBO(right_shift_combo, KC_RIGHT_SHIFT),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
  [0] = LAYOUT_voyager(
    CW_TOGG,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPC,
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_ENTER,
    KC_HYPR,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RHYPR,
                                                                    KC_SPACE,       LEFT,                                           RIGHT,        KC_BSPC
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_MEH,         KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_BSPC,        KC_NO,          KC_MINUS,       KC_EQUAL,       KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_QUOTE,       KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_NO,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_CTRL,  KC_RIGHT_SHIFT, KC_RIGHT_ALT,   KC_MEH,
                                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_F11,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NO,          KC_GRAVE,       KC_HOME,        KC_PAGE_UP,     KC_PGDN,        KC_END,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NO,          KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_NO,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
    // clang-format on
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
    // clang-format off
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  '*', '*', '*', '*'
    // clang-format on
);

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
    RGB   rgb = hsv_to_rgb(hsv);
    float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
    return (RGB){f * rgb.r, f * rgb.g, f * rgb.b};
}

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [1] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [2] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}},

    [4] = {{63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {63, 76, 255}, {0, 0, 0}, {0, 0, 0}},

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
            RGB rgb = hsv_to_rgb_with_value(hsv);
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (!keyboard_config.disable_layer_led) {
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
            case 3:
                set_layer_color(3);
                break;
            case 4:
                set_layer_color(4);
                break;
            default:
                if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
                    rgb_matrix_set_color_all(0, 0, 0);
                }
        }
    } else {
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
            rgb_matrix_set_color_all(0, 0, 0);
        }
    }

    return true;
}

static bool    layer_key_held;
static bool    stop;
static uint8_t held_layer_mods;

static const uint16_t combo_extension_keys[ARRAY_SIZE(key_combos)][3] = {
    // clang-format off
    [LEFT_ALT_COMBO]         = {KC_C, KC_X},
    [LEFT_CTRL_ALT_COMBO]    = {KC_V, KC_X, KC_HYPR},
    [LEFT_CTRL_COMBO]        = {KC_V, KC_Z, KC_HYPR},
    [LEFT_CTRL_SHIFT_COMBO]  = {KC_V, KC_HYPR},
    [LEFT_GUI_ALT_COMBO]     = {KC_C, KC_X},
    [LEFT_GUI_COMBO]         = {KC_X, KC_Z},
    [LEFT_GUI_CTRL_ALT_COMBO]  = {KC_X},
    [LEFT_GUI_CTRL_COMBO]    = {KC_Z},
    [LEFT_GUI_SHIFT_ALT_COMBO] = {KC_C},
    [LEFT_GUI_SHIFT_COMBO]   = {KC_C, KC_Z},
    [LEFT_SHIFT_ALT_COMBO]   = {KC_C},
    [LEFT_SHIFT_COMBO]       = {KC_V, KC_C, KC_HYPR},
    [RIGHT_ALT_COMBO]        = {KC_COMMA, KC_DOT},
    [RIGHT_CTRL_ALT_COMBO]   = {KC_M, KC_DOT, KC_RHYPR},
    [RIGHT_CTRL_COMBO]       = {KC_M, KC_SLASH, KC_RHYPR},
    [RIGHT_CTRL_SHIFT_COMBO] = {KC_M, KC_RHYPR},
    [RIGHT_GUI_ALT_COMBO]    = {KC_COMMA, KC_DOT},
    [RIGHT_GUI_COMBO]        = {KC_DOT, KC_SLASH},
    [RIGHT_GUI_CTRL_ALT_COMBO]  = {KC_DOT},
    [RIGHT_GUI_CTRL_COMBO]   = {KC_SLASH},
    [RIGHT_GUI_SHIFT_ALT_COMBO] = {KC_COMMA},
    [RIGHT_GUI_SHIFT_COMBO]  = {KC_COMMA, KC_SLASH},
    [RIGHT_SHIFT_ALT_COMBO]  = {KC_COMMA},
    [RIGHT_SHIFT_COMBO]      = {KC_M, KC_COMMA, KC_RHYPR},
    // clang-format on
};

static keyrecord_t combo_presses[ARRAY_SIZE(key_combos)][ARRAY_SIZE(right_gui_ctrl_shift_combo) - 1];
static bool        combo_used[ARRAY_SIZE(key_combos)];
static bool        skip_combo_press;
static uint16_t    last_combo_press;

static uint8_t opposite_combo_mods(keypos_t key) {
    return key.row < MATRIX_ROWS / 2 ? MOD_BIT_RALT | MOD_BIT_RCTRL | MOD_BIT_RSHIFT | MOD_BIT_RGUI : MOD_BIT_LALT | MOD_BIT_LCTRL | MOD_BIT_LSHIFT | MOD_BIT_LGUI;
}

static uint8_t combo_mods(uint16_t keycode) {
    if (IS_MODIFIER_KEYCODE(keycode)) {
        return MOD_BIT(keycode);
    }
    if (KEYCODE_IS_MOD(keycode)) {
        const uint8_t mods = QK_MODS_GET_MODS(keycode) & 0x0F;
        return keycode & QK_RMODS_MIN ? mods << 4 : mods;
    }
    return 0;
}

static bool is_combo_extension(uint16_t combo_index, uint16_t keycode) {
    for (uint8_t i = 0; i < ARRAY_SIZE(combo_extension_keys[combo_index]); ++i) {
        const uint16_t extension = combo_extension_keys[combo_index][i];
        if (extension == KC_NO) {
            break;
        }
        if (extension == keycode) {
            return true;
        }
    }
    return false;
}

static bool modifier_combo_is_pending(const combo_t *combo) {
    return KEYCODE_IS_MOD(combo->keycode) && !combo->active && !combo->disabled && combo->state && pgm_read_word(&combo->keys[bitpop(combo->state)]) == COMBO_END;
}

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) {
        return true;
    }
    if (skip_combo_press) {
        return false;
    }

    const uint8_t opposite_mods = opposite_combo_mods(record->event.key);

    // An active or pending modifier on the opposite half takes priority over a new combo.
    for (uint16_t i = 0; i < ARRAY_SIZE(key_combos); ++i) {
        const combo_t *other = &key_combos[i];
        if ((combo_mods(other->keycode) & opposite_mods) && (other->active || modifier_combo_is_pending(other))) {
            return false;
        }
    }

    if (!combo->active) {
        const uint8_t press_index = bitpop(combo->state);
        if (pgm_read_word(&combo->keys[press_index]) == COMBO_END) {
            return false;
        }
        combo_presses[combo_index][press_index]         = *record;
        combo_presses[combo_index][press_index].keycode = keycode;
        last_combo_press                                = timer_read();
        if (press_index == 0) {
            combo_used[combo_index] = false;
        }
    }
    return true;
}

bool pre_process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!IS_KEYEVENT(record->event) || !record->event.pressed) {
        return true;
    }

    skip_combo_press            = false;
    const uint8_t opposite_mods = opposite_combo_mods(record->event.key);

    for (uint16_t i = 0; i < ARRAY_SIZE(key_combos); ++i) {
        combo_t *combo = &key_combos[i];
        if (!combo->active && !modifier_combo_is_pending(combo)) {
            continue;
        }
        if (combo_mods(combo->keycode) & opposite_mods) {
            combo_used[i] = true;
            continue;
        }
        if (!combo->active && is_combo_extension(i, keycode)) {
            continue;
        }

        // Let QMK release the modifiers or flush the chord if it is still buffered.
        const uint8_t replay_count = combo->active && !combo_used[i] ? bitpop(combo->state) : 0;
        keyrecord_t   release      = combo_presses[i][0];
        release.event.pressed      = false;
        process_combo(release.keycode, &release);
        for (uint8_t j = 0; j < replay_count; ++j) {
            process_record(&combo_presses[i][j]);
            clear_weak_mods();
        }
        skip_combo_press = true;
    }
    return true;
}

bool process_combo_key_release(uint16_t combo_index, combo_t *combo, uint8_t key_index, uint16_t keycode) {
    return KEYCODE_IS_MOD(combo->keycode);
}

void housekeeping_task_user(void) {
    for (uint16_t i = 0; i < ARRAY_SIZE(key_combos); ++i) {
        if (modifier_combo_is_pending(&key_combos[i])) {
            // Give longer chords the same interval between key presses as QMK's combo timer.
            if (combo_extension_keys[i][0] != KC_NO && timer_elapsed(last_combo_press) <= COMBO_TERM) {
                continue;
            }
            // A non-member tick dispatches the completed combo without restarting its timer.
            keyrecord_t tick = {.event = MAKE_TICK_EVENT};
            process_combo(KC_TRNS, &tick);
            break;
        }
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QK_MODS ... QK_MODS_MAX:
            // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
            // this makes sure that modifiers are always applied to the key that was pressed.
            if (IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
                if (record->event.pressed) {
                    add_mods(QK_MODS_GET_MODS(keycode));
                    send_keyboard_report();
                    wait_ms(2);
                    register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
                    return false;
                } else {
                    wait_ms(2);
                    del_mods(QK_MODS_GET_MODS(keycode));
                }
            }
            break;

        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;

        case LEFT:
        case RIGHT: {
            const uint8_t mod_layer = keycode == LEFT ? 1 : 3;
            if (record->event.pressed) {
                layer_move(mod_layer);
                layer_on(mod_layer + 1);
                layer_key_held = true;
            } else {
                if (held_layer_mods == 0) {
                    if (stop) {
                        layer_off(mod_layer);
                        layer_off(mod_layer + 1);
                    } else if (get_mods() != 0) {
                        layer_off(mod_layer + 1);
                    }
                }
                stop           = false;
                layer_key_held = false;
            }
            return false;
        }
        case KC_LCTL ... KC_RGUI:
            break;
        default:
            if (record->event.pressed && layer_key_held) {
                stop = true;
            }
            break;
    }
    return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LCTL ... KC_RGUI:
        case KC_MEH:
        case KC_HYPR:
        case KC_RHYPR: {
            // The cached source layer stays the same on release, even with the overlay active.
            const uint8_t source_layer = IS_KEYEVENT(record->event) ? read_source_layers_cache(record->event.key) : 0;
            const bool    is_layer_mod = source_layer == 1 || source_layer == 3;
            if (is_layer_mod) {
                if (record->event.pressed) {
                    ++held_layer_mods;
                    layer_on(source_layer + 1);
                } else {
                    --held_layer_mods;
                }
            }
            if (layer_key_held || held_layer_mods != 0) {
                break;
            }
            if (record->event.pressed || is_layer_mod) {
                layer_off(2);
                layer_off(4);
            }
            if (!record->event.pressed && get_mods() == 0) {
                layer_off(1);
                layer_off(3);
            }
            break;
        }
        default:
            if (!record->event.pressed && !layer_key_held && held_layer_mods == 0) {
                layer_off(2);
                layer_off(4);
                if (get_mods() == 0) {
                    layer_off(1);
                    layer_off(3);
                }
            }
            break;
    }
}
