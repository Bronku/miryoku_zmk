// miryoku/custom_config.h  (in your fork of manna-harbour/miryoku_zmk)

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_EXTRA_QWERTY
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_WIN   // Undo/Redo as Ctrl+Z / Ctrl+Y; remove if you're not on Windows

// Gaming layer (left hand): replaces the Tap layer.
// Entered with a layer thumb held plus the Tap key on the feature row (see Miryoku docs),
// left with &to U_BASE on the top-right pinky.
// Fingers rest on S/D/F but send A/S/D, with W above D: WASD with the hand shifted one key right.
// The left pinky column is free for Esc / Shift / Ctrl, thumbs are Alt / Space / Enter.
// 40 entries: 3 rows of 10 (left 5 + right 5), then a thumb row of 10:
// 2 unused, 3 left thumbs, 3 right thumbs, 2 unused.
#define MIRYOKU_LAYER_TAP \
&kp ESC,    &kp Q, &kp W, &kp E, &kp R,      &kp N1, &kp N2, &kp N3, &kp N4, &to U_BASE, \
&kp LSHFT,  &kp A, &kp S, &kp D, &kp F,      &none,  &none,  &none,  &none,  &none,      \
&kp LCTRL,  &kp Z, &kp X, &kp C, &kp V,      &none,  &none,  &none,  &none,  &none,      \
&none, &none,  &kp LALT, &kp SPACE, &kp ENTER,  &none, &none, &none,  &none, &none
