#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define MDIA 2 // media keys

enum custom_keycodes {
  VRSN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |  1!  |  2@  |  3#  |  4$  |  5%  |      |           |  =+  |  6^  |  7&  |  8*  |  9(  |  0)  |  -_    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L2  |   Y  |   U  |   I  |   O  |   P  | BkSp   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Ctrl   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;:  | Enter  |
 * |--------+------+------+------+------+------| LGui |           | RGui |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |  ,<  |  .>  |  /?  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |ESC/L1| Alt  | LGui | Alt  | LGui |                                       |'"/L2 |  \|  |  [{  |  ]}  |        |
 *   `----------------------------------'                                       `------------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |  %   | LAlt |       | RAlt |  "   |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 |Space | ESC  |------|       |------|  Tab   | Caps |
 *                                 |      |      | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
[BASE] = LAYOUT_ergodox(
  // left hand
  KC_ESC,          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,
  KC_TAB,          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    TG(SYMB),
  KC_LCTRL,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
  KC_LSFT,         KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LGUI,
  LT(SYMB,KC_ESC), KC_LALT, KC_LGUI, KC_LALT, KC_LGUI,
                                                       KC_PERC, KC_LALT,
                                                                KC_HOME,
                                               KC_SPC, KC_ESC,  KC_END,

                   // right hand
                   KC_EQL,   KC_6,    KC_7,             KC_8,    KC_9,    KC_0,    KC_MINS,
                   TG(MDIA), KC_Y,    KC_U,             KC_I,    KC_O,    KC_P,    KC_BSPC,
                             KC_H,    KC_J,             KC_K,    KC_L,    KC_SCLN, KC_ENT,
                   KC_RGUI,  KC_N,    KC_M,             KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                      LT(MDIA,KC_QUOT), KC_BSLS, KC_LBRC, KC_RBRC, KC_TRNS,
                   KC_RALT,  KC_DQUO,
                   KC_PGUP,
                   KC_PGDN,  KC_TAB,  KC_CAPS
),
/* Keymap 1: Symbol Layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * |Version  |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |   /   |   F10  |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+-------+--------|
 * |         |   !  |   @  |   {  |   }  |   |  |      |           |      |   Up |   7  |   8  |   9  |   *   |   F11  |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+-------+--------|
 * |         |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   -   |   F12  |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+----- -+--------|
 * |         |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   +   |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+-------+--------'
 *   |       |      |      |      |      |                                       |   0  |   0  |   .  |   =   |      |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |Reset |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[SYMB] = LAYOUT_ergodox(
  // left hand
  VRSN,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS,
  KC_TRNS, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS,
  KC_TRNS, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,
  KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS,
  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                               KC_TRNS, RESET,
                                                        KC_TRNS,
                                      KC_TRNS, KC_TRNS, KC_TRNS,

           // right hand
           KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_SLASH, KC_F10,
           KC_TRNS, KC_UP,   KC_7,    KC_8,    KC_9,    KC_ASTR,  KC_F11,
                    KC_DOWN, KC_4,    KC_5,    KC_6,    KC_MINUS, KC_F12,
           KC_TRNS, KC_AMPR, KC_1,    KC_2,    KC_3,    KC_PLUS,  KC_TRNS,
                             KC_0,    KC_0,    KC_DOT,  KC_EQL,   KC_TRNS,
           KC_TRNS, KC_TRNS,
           KC_TRNS,
           KC_TRNS, KC_TRNS, KC_TRNS
),
/* Keymap 2: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | MsUp |      |      |      |           |      | BRM- | BRM+ | Up   |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      | Left | Down |Right |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      | Vol- | Vol+ | MUTE |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
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
           KC_TRNS, KC_BRMD, KC_BRMU, KC_UP,   KC_TRNS,  KC_TRNS, KC_TRNS,
                    KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS,
           KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE,  KC_TRNS, KC_TRNS,
                             KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
           KC_TRNS, KC_TRNS,
           KC_TRNS,
           KC_TRNS, KC_TRNS, KC_TRNS
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
      default:
        break;
    }

  return state;
};
