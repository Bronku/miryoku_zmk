// miryoku/custom_config.h  (in your fork of manna-harbour/miryoku_zmk)

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_EXTRA_QWERTY

// ---------------------------------------------------------------------------
// Gaming layer: replaces the Tap layer.
// Enter: hold a layer thumb and double-tap the Tap key on the feature row.
// Leave: &to U_BASE on the right home-row pinky (the ' position).
//
// Left hand: fingers rest on S/D/F but send A/S/D, with W above (WASD, hand shifted one key right).
//   Pinky column = Esc / Shift / Ctrl. T, G and B moved to the right hand (, . /).
// Right hand: plain QWERTY letters (M, I, etc.), no home row mods.
// Left thumbs: Alt, Space, and a held layer key for the number layer below.
// 40 entries: 3 rows of 10 (left 5 + right 5), then a thumb row of 10:
// 2 unused, 3 left thumbs, 3 right thumbs, 2 unused.
// ---------------------------------------------------------------------------
#define MIRYOKU_LAYER_TAP \
&kp ESC,    &kp Q, &kp W, &kp E, &kp R,      &kp Y, &kp U, &kp I, &kp O, &kp P,        \
&kp LSHFT,  &kp A, &kp S, &kp D, &kp F,      &kp H, &kp J, &kp K, &kp L, &to U_BASE,   \
&kp LCTRL,  &kp Z, &kp X, &kp C, &kp V,      &kp N, &kp M, &kp T, &kp G, &kp B,        \
&none, &none,  &kp LALT, &kp SPACE, &mo U_BUTTON,  &none, &none, &none,  &none, &none

// ---------------------------------------------------------------------------
// Game number layer: reuses Miryoku's Button layer slot (it sits above the Tap layer).
// Hold the left inner thumb in the gaming layer. Movement keys (W/A/S/D, Shift) stay live,
// the other left-hand keys become numbers 0-9. Right hand and thumbs fall through.
// Side effect: holding Z or / on the Base layer may also show this layer (Miryoku's
// manual Button layer activation), which you don't use.
// ---------------------------------------------------------------------------
#define MIRYOKU_LAYER_BUTTON \
&kp N1,  &kp N2, &trans, &kp N3, &kp N4,     &trans, &trans, &trans, &trans, &trans, \
&trans,  &trans, &trans, &trans, &kp N5,     &trans, &trans, &trans, &trans, &trans, \
&kp N0,  &kp N6, &kp N7, &kp N8, &kp N9,     &trans, &trans, &trans, &trans, &trans, \
&trans, &trans,  &trans, &trans, &trans,     &trans, &trans, &trans, &trans, &trans
