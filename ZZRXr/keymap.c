#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_W,           KC_E,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_U,           KC_I,           KC_O,           MO(8),          LCTL(LSFT(KC_TAB)),
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_K,           KC_L,           KC_P,           LCTL(KC_TAB),   
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_M,           KC_R,           KC_Y,           KC_B,           LALT(KC_TAB),   
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_TRANSPARENT,                                 KC_TRANSPARENT, MO(1),          MO(2),          OSL(3),         TT(4),          TG(5),          
                                                    KC_SPACE,       KC_ENTER,                                       KC_ESCAPE,      TO(0)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_CIRC,        KC_TILD,        KC_AMPR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_UP,          KC_PGDN,        KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_AT,          KC_EXLM,        KC_QUES,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_MINUS,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DLR,         KC_HASH,        KC_COMMA,       KC_DOT,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_ENTER,       KC_END,         KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_BSLS,        KC_SLASH,       KC_LBRC,        KC_RBRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_COMMA,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SCLN,        KC_COLN,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_DOT,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_ASTR,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        RGB_SAD,        RGB_SAI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_AUDIO_VOL_UP,KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_TOG,        RGB_MODE_FORWARD,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_AUDIO_MUTE,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_TAB,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    ST_MACRO_0,     KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RBRC,        
    OSL(6),         KC_LEFT_SHIFT,  OSL(7),         KC_LEFT_ALT,    KC_LEFT_CTRL,   OSL(6),                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_5,           KC_6,           KC_7,           KC_8,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_KP_PLUS),LCTL(LSFT(KC_R)),KC_TRANSPARENT, LCTL(KC_R),     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_KP_MINUS),LCTL(KC_T),     KC_TRANSPARENT, LCTL(KC_W),     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_N, KC_K, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_K, KC_M, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_L, KC_K, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_6, KC_5, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_4, KC_6, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_4, KC_6, KC_5, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_4, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_I, KC_L, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_K, KC_L, KC_P, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_M, KC_R, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_N, KC_L, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_K, KC_N, KC_L, COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_K, KC_P, COMBO_END};
const uint16_t PROGMEM combo18[] = { KC_3, KC_1, COMBO_END};
const uint16_t PROGMEM combo19[] = { KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM combo20[] = { KC_O, KC_I, COMBO_END};
const uint16_t PROGMEM combo21[] = { KC_E, KC_W, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_G),
    COMBO(combo1, KC_H),
    COMBO(combo2, KC_TAB),
    COMBO(combo3, KC_ENTER),
    COMBO(combo4, KC_BSPC),
    COMBO(combo5, KC_ESCAPE),
    COMBO(combo6, KC_PLUS),
    COMBO(combo7, KC_MINUS),
    COMBO(combo8, KC_KP_ASTERISK),
    COMBO(combo9, KC_KP_SLASH),
    COMBO(combo10, KC_EQUAL),
    COMBO(combo11, LSFT(KC_I)),
    COMBO(combo12, KC_DELETE),
    COMBO(combo13, KC_DOT),
    COMBO(combo14, KC_COMMA),
    COMBO(combo15, KC_QUOTE),
    COMBO(combo16, KC_TILD),
    COMBO(combo17, KC_CIRC),
    COMBO(combo18, KC_ENTER),
    COMBO(combo19, KC_BSPC),
    COMBO(combo20, KC_J),
    COMBO(combo21, KC_Q),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LEFT_CTRL:
            return TAPPING_TERM -100;
        case MO(8):
            return TAPPING_TERM -100;
        case MO(2):
            return TAPPING_TERM -100;
        default:
            return TAPPING_TERM;
    }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_TAB)));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



