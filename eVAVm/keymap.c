#include QMK_KEYBOARD_H
#include "version.h"
#include "features/achordion.h"

#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_DELETE,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_EQUAL,       
    KC_ESCAPE,      MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_LALT, KC_I),MT(MOD_LGUI, KC_O),KC_QUOTE,       
    KC_LEFT_GUI,    KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLS,        
                                                    LT(3,KC_SPACE), KC_TAB,                                         KC_ENTER,       LT(4,KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, RALT(KC_C),     RALT(KC_N),     RALT(KC_V),     RALT(KC_B),     RALT(KC_DOT),                                   KC_NO,          RALT(KC_Z),     RALT(KC_X),     RALT(KC_COMMA), RALT(KC_M),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          RALT(KC_F),     RALT(KC_G),     KC_NO,                                          KC_NO,          RALT(KC_A),     RALT(KC_S),     RALT(KC_D),     KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    TO(5),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_BSPC,        LALT(KC_D),     LCTL(KC_W),     LCTL(KC_F),     LCTL(LSFT(KC_C)),LCTL(LSFT(KC_V)),                                KC_INSERT,      KC_PAGE_UP,     KC_HOME,        KC_END,         KC_PGDN,        KC_F12,         
    KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_T),                                     KC_DELETE,      KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_APPLICATION, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_R),                                     CW_TOGG,        TO(0),          TO(1),          TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_DLR,         KC_LBRC,        KC_RBRC,        KC_PERC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AT,          KC_AMPR,        KC_LPRN,        KC_RPRN,        KC_ASTR,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HASH,        KC_GRAVE,       KC_LCBR,        KC_RCBR,        KC_EXLM,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3,KC_SPACE):
            return TAPPING_TERM + 25;
        case LT(4,KC_BSPC):
            return TAPPING_TERM + 25;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {43,15,255}, {71,218,204}, {71,218,204}, {71,218,204}, {71,218,204}, {71,218,204}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {71,218,204}, {71,218,204}, {71,218,204}, {71,218,204}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255} },

    [2] = { {43,15,255}, {43,15,255}, {43,15,255}, {0,245,245}, {0,245,245}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {0,245,245}, {0,245,245}, {0,245,245}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255} },

    [3] = { {43,15,255}, {129,224,254}, {129,224,254}, {129,224,254}, {129,224,254}, {129,224,254}, {0,245,245}, {74,229,159}, {74,229,159}, {74,229,159}, {234,255,255}, {234,255,255}, {0,245,245}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {74,229,159}, {41,255,255}, {74,229,159}, {74,229,159}, {219,255,255}, {219,255,255}, {74,229,159}, {43,15,255}, {43,15,255}, {129,224,254}, {129,224,254}, {129,224,254}, {129,224,254}, {129,224,254}, {129,224,254}, {255,218,204}, {24,218,204}, {40,218,204}, {40,218,204}, {24,218,204}, {129,224,254}, {255,218,204}, {139,222,223}, {139,222,223}, {139,222,223}, {139,222,223}, {43,15,255}, {41,255,255}, {152,255,255}, {71,218,204}, {0,245,245}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255} },

    [4] = { {43,15,255}, {129,224,254}, {129,224,254}, {129,224,254}, {129,224,254}, {129,224,254}, {43,15,255}, {255,218,204}, {24,218,204}, {40,218,204}, {40,218,204}, {24,218,204}, {43,15,255}, {255,218,204}, {24,218,204}, {40,218,204}, {40,218,204}, {24,218,204}, {43,15,255}, {255,218,204}, {24,218,204}, {40,218,204}, {40,218,204}, {24,218,204}, {43,15,255}, {43,15,255}, {129,224,254}, {129,224,254}, {129,224,254}, {129,224,254}, {129,224,254}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {0,0,0}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
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
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_achordion(keycode, record)) { return false; }

  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}




void matrix_scan_user(void) {
  achordion_task();
}

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
  // the space and backspace characters are below the normal letter keys, so I want to allow chords with them.
  switch (tap_hold_keycode) {
    case LT(3,KC_SPACE):
    case LT(4,KC_BSPC):
      return true;
      break;
  }

  // also, if the other key is a tab or enter, I want to allow chords with them.
  switch (other_keycode) {
    case KC_TAB:
    case KC_ENTER:
      return true;
      break;
  }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}
