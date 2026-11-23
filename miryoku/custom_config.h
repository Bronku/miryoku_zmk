// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// miryoku/custom_config.h  (in your fork of manna-harbour/miryoku_zmk)

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_EXTRA_QWERTY
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_WIN   // Undo/Redo as Ctrl+Z / Ctrl+Y; remove if you're not on Windows

// Gaming layer: replaces the Tap layer.
// Entered from a left-hand layer (hold its thumb, tap the ring-finger top-row key),
// left with &to U_BASE on the top-left pinky.
// Order: 3 rows of 10 (left 5 + right 5), then 6 thumbs (left 3, right 3).
// Before using this, compare with the original MIRYOKU_ALTERNATIVES_TAP_QWERTY block in
// miryoku/miryoku_babel/miryoku_layer_alternatives.h and match its entry style.
#define MIRYOKU_LAYER_TAP \
&to U_BASE, &kp N1, &kp N2, &kp N3, &kp N4,     &kp R,   &kp Q, &kp W, &kp E, &kp ESC,   \
&none,      &none,  &none,  &none,  &none,      &kp F,   &kp A, &kp S, &kp D, &kp LSHFT, \
&none,      &none,  &none,  &none,  &none,      &kp TAB, &kp Z, &kp X, &kp C, &kp LCTRL, \
&none, &none, &none,                            &kp SPACE, &kp LALT, &kp ENTER
