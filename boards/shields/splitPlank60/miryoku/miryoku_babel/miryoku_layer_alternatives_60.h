// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once

#define MIRYOKU_ALTERNATIVES_GAME \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Y,                &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_NU,                    U_NU,  &kp H,                &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Y,                &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, Q),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             U_NU,                    U_NU,  &kp H,                U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, M),     \
U_LT(U_BUTTON, W), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp COMMA,         &kp DOT,           U_MT(RALT, SLASH), U_LT(U_BUTTON, SQT), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             U_NU,                    U_NU,  &kp G,                &kp C,             &kp R,             &kp F,             &kp Z,             \
U_MT(LGUI, Y),     U_MT(LALT, I),     U_MT(LCTRL, E),    U_MT(LSHFT, A),    &kp DOT,           U_NU,                    U_NU,  &kp D,                U_MT(LSHFT, S),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, B),     \
U_LT(U_BUTTON, J), U_MT(RALT, SLASH), &kp COMMA,         &kp K,             &kp SQT,           U_NU,                    U_NU,  &kp W,                &kp M,             &kp L,             U_MT(RALT, P),     U_LT(U_BUTTON, V),  \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp D,             U_NU,                    U_NU,  &kp H,                U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp K,                &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             U_NU,                    U_NU,  &kp M,                U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             U_NU,                    U_NU,  &kp K,                &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             U_NU,                    U_NU,  &kp K,                U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             U_NU,                    U_NU,  &kp M,                &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             U_NU,                    U_NU,  &kp F,                &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT(LGUI, A),     U_MT(LALT, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    &kp I,             U_NU,                    U_NU,  &kp D,                U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, S),     \
U_LT(U_BUTTON, SLASH),U_MT(RALT, Q),  &kp J,             &kp K,             &kp X,             U_NU,                    U_NU,  &kp B,                &kp M,             &kp W,             U_MT(RALT, V),     U_LT(U_BUTTON, Z),  \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             U_NU,                    U_NU,  &kp SQT,              &kp Q,             &kp U,             &kp D,             &kp J,             \
U_MT(LGUI, S),     U_MT(LALT, H),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp COMMA,         U_NU,                    U_NU,  &kp DOT,              U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, F), U_MT(RALT, M),     &kp V,             &kp C,             &kp SLASH,         U_NU,                    U_NU,  &kp G,                &kp P,             &kp X,             U_MT(RALT, K),     U_LT(U_BUTTON, Y),  \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp F,             &kp U,             &kp P,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, H),    U_MT(LSHFT, T),    &kp G,             U_NU,                    U_NU,  &kp Y,                U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp M,             &kp C,             &kp V,             U_NU,                    U_NU,  &kp K,                &kp L,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Y,                &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             U_NU,                    U_NU,  &kp H,                U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Z,                &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             U_NU,                    U_NU,  &kp H,                U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Y), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_NU,                    U_NU,  U_LT(U_MOUSE, TAB),   U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Y,                &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, Q),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             U_NU,                    U_NU,  &kp H,                U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, M),     \
U_LT(U_BUTTON, W), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp COMMA,         &kp DOT,           U_MT(RALT, SLASH), U_LT(U_BUTTON, SQT), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             U_NU,                    U_NU,  &kp G,                &kp C,             &kp R,             &kp F,             &kp Z,             \
U_MT(LGUI, Y),     U_MT(LALT, I),     U_MT(LCTRL, E),    U_MT(LSHFT, A),    &kp DOT,           U_NU,                    U_NU,  &kp D,                U_MT(LSHFT, S),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, B),     \
U_LT(U_BUTTON, J), U_MT(RALT, SLASH), &kp COMMA,         &kp K,             &kp SQT,           U_NU,                    U_NU,  &kp W,                &kp M,             &kp L,             U_MT(RALT, P),     U_LT(U_BUTTON, V),  \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp D,             U_NU,                    U_NU,  &kp H,                U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp K,                &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             U_NU,                    U_NU,  &kp M,                U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             U_NU,                    U_NU,  &kp K,                &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             U_NU,                    U_NU,  &kp K,                U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             U_NU,                    U_NU,  &kp M,                &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             U_NU,                    U_NU,  &kp F,                &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT(LGUI, A),     U_MT(LALT, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    &kp I,             U_NU,                    U_NU,  &kp D,                U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LALT, N),     U_MT(LGUI, S),     \
U_LT(U_BUTTON, SLASH),U_MT(RALT, Q),  &kp J,             &kp K,             &kp X,             U_NU,                    U_NU,  &kp B,                &kp M,             &kp W,             U_MT(RALT, V),     U_LT(U_BUTTON, Z),  \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             U_NU,                    U_NU,  &kp SQT,              &kp Q,             &kp U,             &kp D,             &kp J,             \
U_MT(LGUI, S),     U_MT(LALT, H),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp COMMA,         U_NU,                    U_NU,  &kp DOT,              U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, F), U_MT(RALT, M),     &kp V,             &kp C,             &kp SLASH,         U_NU,                    U_NU,  &kp G,                &kp P,             &kp X,             U_MT(RALT, K),     U_LT(U_BUTTON, Y),  \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp F,             &kp U,             &kp P,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, H),    U_MT(LSHFT, T),    &kp G,             U_NU,                    U_NU,  &kp Y,                U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, O),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp M,             &kp C,             &kp V,             U_NU,                    U_NU,  &kp K,                &kp L,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Y,                &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             U_NU,                    U_NU,  &kp H,                U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Z,                &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             U_NU,                    U_NU,  &kp H,                U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Y), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_NU,                    U_NU,  U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NU,              U_NU
 
 
#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Y,                &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             U_NU,                    U_NU,  &kp H,                &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,            \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             U_NU,                    U_NU,  &kp G,                &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           U_NU,                    U_NU,  &kp D,                &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           U_NU,                    U_NU,  &kp W,                &kp M,             &kp L,             &kp P,             &kp V,              \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             U_NU,                    U_NU,  &kp H,                &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp K,                &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             U_NU,                    U_NU,  &kp M,                &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             U_NU,                    U_NU,  &kp K,                &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             U_NU,                    U_NU,  &kp K,                &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             U_NU,                    U_NU,  &kp M,                &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             U_NU,                    U_NU,  &kp F,                &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             U_NU,                    U_NU,  &kp D,                &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             U_NU,                    U_NU,  &kp B,                &kp M,             &kp W,             &kp V,             &kp Z,              \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             U_NU,                    U_NU,  &kp SQT,              &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         U_NU,                    U_NU,  &kp DOT,              &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         U_NU,                    U_NU,  &kp G,                &kp P,             &kp X,             &kp K,             &kp Y,              \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             U_NU,                    U_NU,  &kp Y,                &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             U_NU,                    U_NU,  &kp K,                &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Y,                &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_NU,                    U_NU,  &kp H,                &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Z,                &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_NU,                    U_NU,  &kp H,                &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp ESC,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
&kp A,             &kp Z,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Y,                &kp U,             &kp I,             &kp O,             &kp P,             \
&kp Q,             &kp S,             &kp D,             &kp F,             &kp G,             U_NU,                    U_NU,  &kp H,                &kp J,             &kp K,             &kp L,             &kp M,             \
&kp W,             &kp X,             &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp COMMA,         &kp DOT,           &kp SLASH,         &kp SQT,            \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
&kp Q,             &kp H,             &kp O,             &kp U,             &kp X,             U_NU,                    U_NU,  &kp G,                &kp C,             &kp R,             &kp F,             &kp Z,             \
&kp Y,             &kp I,             &kp E,             &kp A,             &kp DOT,           U_NU,                    U_NU,  &kp D,                &kp S,             &kp T,             &kp N,             &kp B,             \
&kp J,             &kp SLASH,         &kp COMMA,         &kp K,             &kp SQT,           U_NU,                    U_NU,  &kp W,                &kp M,             &kp L,             &kp P,             &kp V,              \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             U_NU,                    U_NU,  &kp H,                &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp K,                &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             U_NU,                    U_NU,  &kp M,                &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             U_NU,                    U_NU,  &kp K,                &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             U_NU,                    U_NU,  &kp K,                &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             U_NU,                    U_NU,  &kp M,                &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             U_NU,                    U_NU,  &kp F,                &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             U_NU,                    U_NU,  &kp D,                &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             U_NU,                    U_NU,  &kp B,                &kp M,             &kp W,             &kp V,             &kp Z,              \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
&kp W,             &kp L,             &kp R,             &kp B,             &kp Z,             U_NU,                    U_NU,  &kp SQT,              &kp Q,             &kp U,             &kp D,             &kp J,             \
&kp S,             &kp H,             &kp N,             &kp T,             &kp COMMA,         U_NU,                    U_NU,  &kp DOT,              &kp A,             &kp E,             &kp O,             &kp I,             \
&kp F,             &kp M,             &kp V,             &kp C,             &kp SLASH,         U_NU,                    U_NU,  &kp G,                &kp P,             &kp X,             &kp K,             &kp Y,              \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
&kp Q,             &kp D,             &kp R,             &kp W,             &kp B,             U_NU,                    U_NU,  &kp J,                &kp F,             &kp U,             &kp P,             &kp SQT,           \
&kp A,             &kp S,             &kp H,             &kp T,             &kp G,             U_NU,                    U_NU,  &kp Y,                &kp N,             &kp E,             &kp O,             &kp I,             \
&kp Z,             &kp X,             &kp M,             &kp C,             &kp V,             U_NU,                    U_NU,  &kp K,                &kp L,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Y,                &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_NU,                    U_NU,  &kp H,                &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NU,                    U_NU,  &kp Z,                &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_NU,                    U_NU,  &kp H,                &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Y,             &kp X,             &kp C,             &kp V,             &kp B,             U_NU,                    U_NU,  &kp N,                &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp ESC,           &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
 
#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
&kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NU,                    U_NU,  U_NA,                 &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NU,                    U_NU,  U_NA,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NU,                    U_NU,  U_NA,                 &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  U_NA,                 U_NA,              U_NA,              U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_NAV_FLIP \
&kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           U_NU,                    U_NU,  U_NA,                 &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      U_NU,                    U_NU,  U_NA,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NU,                    U_NU,  U_NA,                 &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DEL,           &kp BSPC,          &kp RET,           U_NU,                    U_NU,  U_NA,                 U_NA,              U_NA,              U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  &kp INS,              &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  &u_caps_word,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_NU,                    U_NU,  U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,              \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_NAV_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  &kp LEFT,             &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_NU,                    U_NU,  &kp HOME,             &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,            \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  &u_caps_word,         &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_NU,                    U_NU,  &kp INS,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,            \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  &kp RET,              &kp BSPC,          &kp DEL,           U_NU,              U_NU
 
 
#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              U_NU,                    U_NU,  U_NA,                 &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              U_NU,                    U_NU,  U_NA,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NU,                    U_NU,  U_NA,                 &u_to_U_MOUSE,     &u_to_U_SYM,       &kp RALT,          U_NA,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_BTN3,            U_BTN1,            U_BTN2,            U_NU,                    U_NU,  U_NA,                 U_NA,              U_NA,              U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              U_NU,                    U_NU,  U_NA,                 &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              U_NU,                    U_NU,  U_NA,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NU,                    U_NU,  U_NA,                 &u_to_U_MOUSE,     &u_to_U_SYM,       &kp RALT,          U_NA,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_BTN3,            U_BTN1,            U_BTN2,            U_NU,                    U_NU,  U_NA,                 U_NA,              U_NA,              U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  U_NU,                 U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  U_NU,                 U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,                    U_NU,  U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,              \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  U_BTN2,               U_BTN1,            U_BTN3,            U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  U_MS_L,               U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,                    U_NU,  U_WH_L,               U_WH_D,            U_WH_U,            U_WH_R,            U_NU,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  U_BTN2,               U_BTN1,            U_BTN3,            U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  U_NU,                 U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,                    U_NU,  U_NU,                 U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,             \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  U_BTN2,               U_BTN1,            U_BTN3,            U_NU,              U_NU
 
 
#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
U_RGB_HUI,         U_RGB_SAI,         &kp C_VOL_UP,      U_RGB_BRI,         U_RGB_TOG,         U_NU,                    U_NU,  U_NA,                 &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_RGB_EFF,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_EP_TOG,          U_NU,                    U_NU,  U_NA,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NU,                    U_NU,  U_NA,                 &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NU,                    U_NU,  U_NA,                 U_NA,              U_NA,              U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         U_NU,                    U_NU,  U_NA,                 &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          U_NU,                    U_NU,  U_NA,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NU,                    U_NU,  U_NA,                 &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NU,                    U_NU,  U_NA,                 U_NA,              U_NA,              U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  U_RGB_TOG,            U_RGB_EFF,         &kp C_VOL_UP,      U_RGB_HUI,         U_RGB_SAI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  U_EP_TOG,             &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_RGB_BRI,         \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              U_NU,                    U_NU,  &u_out_tog,           &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,        \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  &kp C_STOP,           &kp C_PP,          &kp C_MUTE,        U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  U_RGB_EFF,            U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  &kp C_PREV,           &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              U_NU,                    U_NU,  &u_bt_sel_0,          &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,         \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  &kp C_STOP,           &kp C_PP,          &kp C_MUTE,        U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  U_RGB_TOG,            U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  U_EP_TOG,             &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              U_NU,                    U_NU,  &u_out_tog,           &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,        \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  &kp C_STOP,           &kp C_PP,          &kp C_MUTE,        U_NU,              U_NU
 
 
#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  &kp LBKT,             &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  &kp EQUAL,            &kp N4,            &kp N5,            &kp N6,            &kp SEMI,          \
U_NA,              &kp RALT,          &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              U_NU,                    U_NU,  &kp BSLH,             &kp N1,            &kp N2,            &kp N3,            &kp GRAVE,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  &kp MINUS,            &kp N0,            &kp DOT,           U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NU,                    U_NU,  U_NA,                 &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NU,                    U_NU,  U_NA,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NU,                    U_NU,  U_NA,                 &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp DOT,           &kp N0,            &kp MINUS,         U_NU,                    U_NU,  U_NA,                 U_NA,              U_NA,              U_NU,              U_NU
 
 
#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  &kp LBRC,             &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  &kp PLUS,             &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp COLON,         \
U_NA,              &kp RALT,          &u_to_U_MOUSE,     &u_to_U_SYM,       U_NA,              U_NU,                    U_NU,  &kp PIPE,             &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,          \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  &kp UNDER,            &kp LPAR,          &kp RPAR,          U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NU,                    U_NU,  U_NA,                 &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NU,                    U_NU,  U_NA,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NU,                    U_NU,  U_NA,                 &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NU,                    U_NU,  U_NA,                 U_NA,              U_NA,              U_NU,              U_NU
 
 
#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NU,                    U_NU,  &kp PSCRN,            &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,                    U_NU,  &kp SLCK,             &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              &kp RALT,          &u_to_U_MEDIA,     &u_to_U_FUN,       U_NA,              U_NU,                    U_NU,  &kp PAUSE_BREAK,      &kp F1,            &kp F2,            &kp F3,            &kp F10,            \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_NA,              U_NA,              U_NA,              U_NU,                    U_NU,  &kp TAB,              &kp SPACE,         &kp K_APP,         U_NU,              U_NU
 
#define MIRYOKU_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NU,                    U_NU,  U_NA,                 &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NU,                    U_NU,  U_NA,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NU,                    U_NU,  U_NA,                 &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,               \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NU,                    U_NU,  U_NA,                 U_NA,              U_NA,              U_NU,              U_NU
 
 
#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NU,                    U_NU,  U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,                    U_NU,  U_NU,                 &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NU,                    U_NU,  U_RDO,                U_PST,             U_CPY,             U_CUT,             U_UND,              \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,                    U_NU,  U_NU,                 U_NU,              U_NU,              U_NU,              U_NU,               \
U_NU,              U_NU,              U_BTN3,            U_BTN1,            U_BTN2,            U_NU,                    U_NU,  U_BTN2,               U_BTN1,            U_BTN3,            U_NU,              U_NU
 