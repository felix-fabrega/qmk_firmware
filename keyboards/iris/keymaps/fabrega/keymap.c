#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _BASE 0
#define _FN 1
#define _WOW 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_ESC , KC_1   ,  KC_2  ,  KC_3  ,  KC_4,    KC_5  ,                             KC_6  ,  KC_7  ,  KC_8  ,  KC_9  ,  KC_0  , KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TAB , KC_Q   ,  KC_W  ,  KC_E  ,  KC_R  ,  KC_T  ,                             KC_Y  ,  KC_U  ,  KC_I  ,  KC_O  ,  KC_P  , KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT , KC_A   ,  KC_S  ,  KC_D  ,  KC_F  ,  KC_G  ,                             KC_H  ,  KC_J  ,  KC_K  ,  KC_L  , KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL , KC_Z   ,  KC_X  ,  KC_C  ,  KC_V  ,  KC_B  ,KC_RALT,          KC_ENT,  KC_N  ,  KC_M  , KC_COMM, KC_DOT , KC_SLSH,RSFT_T(KC_DEL),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LWIN , KC_LALT, KC_SPC ,                  MO(_FN),  KC_ENT , TG(_WOW)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  , _______, _______, _______, _______, _______,                           KC_HOME , KC_UNDS, KC_PLUS, KC_MINS, KC_EQL , KC_MPLY, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     BL_STEP , _______, _______, _______, _______, _______,                           KC_END  , _______, KC_UP  , KC_LBRC, KC_RBRC, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______ , _______, _______, _______, _______, _______,                           KC_PGUP , KC_LEFT, KC_DOWN,KC_RIGHT, _______, KC_VOLU,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ , _______, _______, _______, _______, _______,_______  ,         _______,KC_PGDN , KC_MUTE, KC_MPRV, KC_MNXT, _______, KC_VOLD,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_WOW] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ , _______, _______, _______, _______, _______,                           _______ , _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______ , _______, _______, _______, _______, _______,                           _______ , _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______ , _______, _______, _______, _______, _______,                           _______ , _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ , _______, _______, _______, _______, _______,TG(_WOW),         KC_LSFT , _______, _______, _______, _______, _______, KC_DEL,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______ , _______, _______,                  KC_LCTL , KC_V   , KC_C
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};