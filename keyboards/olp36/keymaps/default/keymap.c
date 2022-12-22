#include QMK_KEYBOARD_H

/* LAYER */
enum layers {
    KL_MAIN,
    KL_FUN,
    KL_NUM,
    KL_SYS,
};
#define MO_FUN  MO(KL_FUN)
#define MO_NUM  MO(KL_NUM)
#define MO_SYS  MO(KL_SYS)

/* MOD */
#define MD_LALT LALT_T(KC_LNG2) // Left Alt when held, muhenkan when tapped
#define MD_LCTL LCTL_T(KC_BSPC) // Left Control when held, BSPC when tapped
#define MD_LSFT LSFT_T(KC_SPC) // Left Shift when held, SPC when tapped

/* JPN KEY */
#define JP_HENK KC_LNG1 // JIS henkan
#define JP_LMKK KC_ASTR // JIS (
#define JP_RMKK KC_LPRN // JIS )
#define JP_AND  LSFT(KC_6)  // JIS &
#define JP_CLN  KC_QUOT // JIS :
#define JP_AT   KC_LBRC // JIS @
#define JP_CIRC KC_EQL  // JIS ^
#define JP_PERC LSFT(KC_5)  // JIS %
#define JP_SQUO LSFT(KC_7)  // JIS '
#define JP_DQUO LSFT(KC_2)  // JIS "
#define JP_DOLL LSFT(KC_4)  // JIS $
#define JP_SHAP LSFT(KC_3)  // #
#define JP_VBAR LSFT(KC_INT3)  // |
#define JP_LKKO KC_RBRC  // JIS [
#define JP_RKKO KC_NUHS  // JIS ]
#define JP_UNDR LSFT(KC_INT1) // JIS _
#define JP_BSLS LOPT(KC_INT3) // JIS Back Slash
#define JP_EQL  LSFT(KC_MINS) // JIS =
#define JP_PLUS LSFT(KC_SCLN) // JIS +
#define JP_ASTR LSFT(KC_QUOT) // JIS *
#define JP_JYEN KC_INT1 // JIS YEN

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [KL_MAIN] = LAYOUT_ortho_4x10(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                          MD_LALT, MO_NUM,  MD_LCTL, MD_LSFT, MO_FUN,  JP_HENK
    ),

    [KL_FUN] = LAYOUT_ortho_4x10(
        KC_ESC,  JP_SQUO, KC_UP,   JP_DQUO, JP_DOLL, KC_SCLN, JP_CLN,  JP_LMKK, JP_RMKK, JP_AT,
        KC_TAB,  KC_LEFT, KC_DOWN, KC_RGHT, JP_SHAP, JP_JYEN, JP_CIRC, JP_AND,  JP_PERC, KC_MINS,
        JP_VBAR, KC_VOLD, KC_MUTE, KC_VOLU, JP_BSLS, KC_TILD, JP_UNDR, JP_LKKO, JP_RKKO, KC_EXLM,
                         _______, MO_SYS,   KC_DEL,  _______, XXXXXXX, KC_LWIN
    ),

    [KL_NUM] = LAYOUT_ortho_4x10(
        XXXXXXX, KC_F10,  KC_F7,   KC_F8,   KC_F9,   KC_7,    KC_8,    KC_9,    KC_0,    JP_EQL,
        XXXXXXX, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_4,    KC_5,    KC_6,    JP_PLUS, KC_MINS,
        XXXXXXX, KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_1,    KC_2,    KC_3,    JP_ASTR, KC_SLSH,
                          _______, XXXXXXX, KC_DEL,  KC_COMM, KC_0,    KC_DOT
    ),

    [KL_SYS] = LAYOUT_ortho_4x10(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLEP,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PWR,
                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )
};
