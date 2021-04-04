#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // Basic
#define SYMB 1 // Symbols
#define MDIA 2 // Media and mouse keys
#define DSIN 3 // For design

enum custom_keycodes {
  VRSN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |  1!  |  2@  |  3#  |  4$  |  5%  | BkSp |           |      |  6^  |  7&  |  8*  |  9(  |  0)  |  -_    |
 * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |Enter |           |      |   Y  |   U  |   I  |   O  |   P  | BkSp   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Ctrl   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;:  | Enter  |
 * |--------+------+------+------+------+------|  L3  |           |  =+  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |  ,<  |  .>  |  /?  | RShift |
 * `--------+------+------+------+------+------+------'           `-------------+------+------+------+------+--------'
 *   |ESC/L1|S+G+A | G+A  | Alt  | LGui |                                       |'"/L2 |  \|  |  [{  |  ]}  |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |  %   |  L1  |       |  L2  | Home |
 *                                 ,------+------+------|       |------+------+------.
 *                                 |      |      | PgUp |       |  +   |      |      |
 *                                 |Space | ESC  |------|       |------| End  | Caps |
 *                                 |      |      | PgDn |       |  -   |      |      |
 *                                 `--------------------'       `--------------------'
 */
[BASE] = LAYOUT_ergodox(
  // left hand
  KC_ESC,          KC_1,          KC_2,          KC_3,    KC_4,    KC_5,    KC_BSPC,
  KC_TAB,          KC_Q,          KC_W,          KC_E,    KC_R,    KC_T,    KC_ENT,
  KC_LCTRL,        KC_A,          KC_S,          KC_D,    KC_F,    KC_G,
  KC_LSFT,         KC_Z,          KC_X,          KC_C,    KC_V,    KC_B,    TG(DSIN),
  LT(SYMB,KC_ESC), SGUI(KC_LALT), LGUI(KC_LALT), KC_LALT, KC_LGUI,
                                                                   KC_PERC, TG(SYMB),
                                                                            KC_PGUP,
                                                          KC_SPC,  KC_ESC,  KC_PGDN,

                   // right hand
                   KC_TRNS,  KC_6,    KC_7,             KC_8,    KC_9,    KC_0,    KC_MINS,
                   KC_TRNS,  KC_Y,    KC_U,             KC_I,    KC_O,    KC_P,    KC_BSPC,
                             KC_H,    KC_J,             KC_K,    KC_L,    KC_SCLN, KC_ENT,
                   KC_EQL,   KC_N,    KC_M,             KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                      LT(MDIA,KC_QUOT), KC_BSLS, KC_LBRC, KC_RBRC, KC_TRNS,
                   TG(MDIA), KC_HOME,
                   KC_PLUS,
                   KC_MINUS, KC_END,  KC_CAPS
),
/* Keymap 1: Symbols
 *
 * ,---------------------------------------------------.           ,------------------------------------------------.
 * | Version |      |      |      |      |      |      |           |      |      |      |  -_  |  =+  |  \|  |  `~   |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+-------|
 * | Reset   |   7  |   8  |   9  |      |      |      |           |      | F1   | F2   |      |      |   {  |   }   |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+-------|
 * |         |   4  |   5  |   6  |      |      |------|           |------| F11  | F12  |      |   [  |   ]  |  '"   |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+-------|
 * |         |   1  |   2  |   3  |      |      |      |           |      |      |      |      |      |      |       |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+-------'
 *   | xxxxx |      |      |   0  |      |                                       |      |      |      |      |     |
 *   `-----------------------------------'                                       `---------------------------------'
 *                                         ,-------------.       ,-------------.
 *                                         |      | xxxx |       |      |      |
 *                                  ,------+------+------|       |------+------+------.
 *                                  |      |      |      |       |      |      |      |
 *                                  |      |      |------|       |------|      |      |
 *                                  |      |      |      |       |      |      |      |
 *                                  `--------------------'       `--------------------'
 */
[SYMB] = LAYOUT_ergodox(
  // left hand
  VRSN,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  RESET,   KC_7,    KC_8,    KC_9,    KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_4,    KC_5,    KC_6,    KC_TRNS, KC_TRNS,
  KC_TRNS, KC_1,    KC_2,    KC_3,    KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_0,    KC_TRNS,
                                               KC_TRNS, KC_TRNS,
                                                        KC_TRNS,
                                      KC_TRNS, KC_TRNS, KC_TRNS,

           // right hand
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_BSLS, KC_GRV,
           KC_TRNS, KC_F1,   KC_F2,   KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR,
                    KC_F11,  KC_F12,  KC_TRNS, KC_LBRC, KC_RBRC, KC_QUOT,
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
           KC_TRNS, KC_TRNS,
           KC_TRNS,
           KC_TRNS, KC_TRNS, KC_TRNS
),
/* Keymap 2: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |        |      |      | MsUp |      |      |      |           |      | BRM- | BRM+ | Vol- | Vol+ | MUTE |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      | Left |  Up  |Right |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      | Down |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       | xxxx |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       | xxxx |      |
 *                                 ,------+------+------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 | Lclk | Rclk |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[MDIA] = LAYOUT_ergodox(
  // left hand
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                               KC_TRNS, KC_TRNS,
                                                        KC_TRNS,
                                      KC_BTN1, KC_BTN2, KC_TRNS,

           // right hand
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
           KC_TRNS, KC_BRMD, KC_BRMU, KC_VOLD, KC_VOLU,  KC_MUTE, KC_TRNS,
                    KC_TRNS, KC_LEFT, KC_UP,   KC_RIGHT, KC_TRNS, KC_TRNS,
           KC_TRNS, KC_TRNS, KC_TRNS, KC_DOWN, KC_TRNS,  KC_TRNS, KC_TRNS,
                             KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
           KC_TRNS, KC_TRNS,
           KC_TRNS,
           KC_TRNS, KC_TRNS, KC_TRNS
),
/* Keymap 3: For design
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |  1!  |  2@  |  3#  |  4$  |  5%  |GUI++ |           |  =+  |  6^  |  7&  |  8*  |  9(  |  0)  |  -_    |
 * |--------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |GUI+- |           |      |   Y  |   U  |   I  |   O  |   P  | BkSp   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Ctrl   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;:  | Enter  |
 * |--------+------+------+------+------+------| xxxx |           | RGui |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |  ,<  |  .>  |  /?  | RShift |
 * `--------+------+------+------+------+------+------'           `-------------+------+------+------+------+--------'
 *   |GUI+L |S+G+A | G+A  | Alt  | LGui |                                       |  '"  |  \|  |  [{  |  ]}  |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |   I  |   P  |       |      |  "   |
 *                                 ,------+------+------|       |------+------+------.
 *                                 |      |      |S+G+} |       |GUI++ |      |      |
 *                                 |Space |   M  |------|       |------| Tab  | Caps |
 *                                 |      |      |S+G+{ |       |GUI+- |      |      |
 *                                 `--------------------'       `--------------------'
 */
[DSIN] = LAYOUT_ergodox(
  // left hand
  KC_ESC,       KC_1,          KC_2,          KC_3,    KC_4,     KC_5, LGUI(KC_PLUS),
  KC_TAB,       KC_Q,          KC_W,          KC_E,    KC_R,     KC_T, LGUI(KC_MINUS),
  KC_LCTRL,     KC_A,          KC_S,          KC_D,    KC_F,     KC_G,
  KC_LSFT,      KC_Z,          KC_X,          KC_C,    KC_V,     KC_B, KC_TRNS,
  LGUI(KC_L),   SGUI(KC_LALT), LGUI(KC_LALT), KC_LALT, KC_LGUI,
                                                                 KC_I, KC_P,
                                                                       SGUI(KC_RBRC),
                                                       KC_SPACE, KC_M, SGUI(KC_LBRC),

                   // right hand
                   KC_EQL,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
                   KC_TRNS,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
                   KC_RGUI,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                      KC_QUOT, KC_BSLS, KC_LBRC, KC_RBRC, KC_TRNS,
                   KC_TRNS,        KC_DQUO,
                   LGUI(KC_PLUS),
                   LGUI(KC_MINUS), KC_TAB,  KC_CAPS
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      case VRSN:
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        return false;
    }
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  ergodox_led_all_set(LED_BRIGHTNESS_LO);
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = biton32(state);
  switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }

  return state;
};
