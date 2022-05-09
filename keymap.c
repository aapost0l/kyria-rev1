#include QMK_KEYBOARD_H

enum layers{
  HDGLD = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [HDGLD] = LAYOUT (
    _______,    KC_J,    KC_G,    KC_M,    KC_P,    KC_V,                                     _______, _______, _______, _______, _______, _______,
    _______,    KC_R,    KC_S,    KC_N,    KC_D,    KC_B,                                     _______,    KC_A,    KC_E,    KC_I,    KC_H, _______,
    _______,    KC_X,    KC_F,    KC_L,    KC_C,    KC_W, _______, _______, _______, _______, _______,    KC_U,    KC_O,    KC_Y,    KC_K, _______,
                               _______, _______, _______,    KC_T, _______, _______,  KC_SPC, _______, _______, _______
  ) //might need a comma here?
};

const uint16_t PROGMEM combo_z[] = {KC_J, KC_F, COMBO_END};
const uint16_t PROGMEM combo_q[] = {KC_U, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = { // is combo_t a user-defined name? if so, consider 'combo_lower_letters'
	COMBO(combo_z, KC_Z),
	COMBO(combo_q, KC_Q),
}
