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
    TO(9),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_DELETE,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_EQUAL,       
    KC_ESCAPE,      MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_LALT, KC_I),MT(MOD_LGUI, KC_O),KC_QUOTE,       
    KC_LEFT_GUI,    LT(8,KC_Z),     KC_X,           KC_C,           LT(6,KC_D),     KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLS,        
                                                    LT(3,KC_SPACE), LT(4,KC_TAB),                                   LT(7,KC_ENTER), LT(5,KC_BSPC)
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
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(1),          TO(2),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(LSFT(KC_Z)),LSFT(KC_INSERT),LCTL(KC_INSERT),LSFT(KC_DELETE),LCTL(KC_Z),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 CW_TOGG,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_APPLICATION, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_INSERT,      KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_CAPS,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_BSPC
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_DLR,         KC_LBRC,        KC_RBRC,        KC_PERC,                                        KC_GRAVE,       KC_UNDS,        KC_TILD,        KC_ASTR,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AT,          KC_AMPR,        KC_LPRN,        KC_RPRN,        KC_ASTR,                                        KC_PIPE,        KC_EQUAL,       KC_PLUS,        KC_EXLM,        KC_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_HASH,        KC_LCBR,        KC_RCBR,        KC_NO,                                          KC_NO,          KC_MINUS,       KC_LABK,        KC_RABK,        KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(LSFT(KC_Z)),LSFT(KC_INSERT),LCTL(KC_INSERT),LSFT(KC_DELETE),LCTL(KC_Z),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN2,     KC_MS_BTN1
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_SCRL,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUSE,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_TAB,                                         KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RGB_VAD,        RGB_VAI,        RGB_SLD,        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,RGB_TOG,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AUDIO_MUTE,  KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,HSV_74_255_255, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_169_255_255,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  [9] = LAYOUT_voyager(
    TO(0),          KC_TILD,        KC_GRAVE,       LSFT(KC_TAB),   KC_TAB,         KC_ENTER,                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_DELETE,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_ESCAPE,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_GUI,    KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_LEFT_CTRL,   KC_LEFT_ALT,                                    KC_NO,          KC_NO
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {43,15,255}, {71,218,204}, {71,218,204}, {71,218,204}, {71,218,204}, {71,218,204}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {71,218,204}, {71,218,204}, {71,218,204}, {71,218,204}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255} },

    [2] = { {43,15,255}, {43,15,255}, {43,15,255}, {0,245,245}, {0,245,245}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {0,245,245}, {0,245,245}, {0,245,245}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255}, {43,15,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {25,235,186}, {43,15,255}, {0,0,0}, {71,218,204}, {0,245,245}, {152,255,255}, {0,0,0}, {0,0,0}, {250,63,255}, {31,230,231}, {31,230,231}, {31,230,231}, {250,63,255}, {0,0,0}, {41,255,255}, {139,222,223}, {139,222,223}, {139,222,223}, {139,222,223}, {41,255,255}, {255,218,204}, {40,218,204}, {24,218,204}, {24,218,204}, {40,218,204}, {41,255,255}, {43,15,255}, {43,15,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {25,235,186}, {0,0,0}, {40,218,204}, {40,218,204}, {40,218,204}, {24,218,204}, {0,0,0}, {0,0,0}, {40,218,204}, {40,218,204}, {40,218,204}, {24,218,204}, {0,0,0}, {0,0,0}, {40,218,204}, {40,218,204}, {40,218,204}, {24,218,204}, {0,0,0}, {0,0,0}, {40,218,204}, {255,218,204}, {255,218,204}, {24,218,204}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {43,15,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,15,255}, {255,218,204}, {24,218,204}, {40,218,204}, {40,218,204}, {24,218,204}, {43,15,255}, {255,218,204}, {24,218,204}, {40,218,204}, {40,218,204}, {24,218,204}, {43,15,255}, {0,0,0}, {24,218,204}, {40,218,204}, {40,218,204}, {0,0,0}, {43,15,255}, {43,15,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {40,218,204}, {40,218,204}, {40,218,204}, {40,218,204}, {0,0,0}, {0,0,0}, {40,218,204}, {40,218,204}, {40,218,204}, {40,218,204}, {40,218,204}, {0,0,0}, {0,0,0}, {40,218,204}, {40,218,204}, {40,218,204}, {0,0,0}, {0,0,0}, {25,235,186}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {25,235,186}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {250,63,255}, {31,230,231}, {31,230,231}, {31,230,231}, {250,63,255}, {0,0,0}, {0,0,0}, {190,218,204}, {190,218,204}, {190,218,204}, {190,218,204}, {0,0,0}, {0,0,0}, {207,218,204}, {207,218,204}, {207,218,204}, {207,218,204}, {0,0,0}, {90,218,204}, {153,218,204} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,218,204}, {40,218,204}, {40,218,204}, {40,218,204}, {255,218,204}, {0,0,0}, {24,218,204}, {40,218,204}, {40,218,204}, {40,218,204}, {190,218,204}, {0,0,0}, {24,218,204}, {40,218,204}, {40,218,204}, {40,218,204}, {190,218,204}, {43,15,255}, {43,15,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {13,215,98}, {13,215,98}, {13,215,98}, {13,215,98}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {25,235,186}, {0,0,0} },

    [8] = { {255,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {25,235,186}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {25,15,195}, {25,15,255}, {40,218,204}, {24,218,204}, {40,218,204}, {40,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {255,218,204}, {190,218,204}, {139,222,223}, {139,222,223}, {190,218,204}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {255,218,204}, {139,222,223} },

    [9] = { {0,245,245}, {92,46,255}, {92,46,255}, {28,46,255}, {28,46,255}, {0,245,245}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {41,47,255}, {152,255,255}, {204,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
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
