const uint16_t PROGMEM combo_z[] = {KC_J, KC_P, COMBO_END};
const uint16_t PROGMEM combo_q[] = {KC_U, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = { // is combo_t a user-defined name? if so, consider 'combo_lower_letters'
	COMBO(combo_z, KC_Z),
	COMBO(combo_q, KC_Q),
};
