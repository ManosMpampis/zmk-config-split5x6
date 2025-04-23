// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define MIRYOKU_TAPDELAY_TAP(CODE) \
U_MACRO(u_tap_##CODE, bindings = <&macro_tap &kp CODE>;)

#define MIRYOKU_TAPDELAY_TAP_BEHAVIORS(CODE) \
U_MACRO(u_tap_##CODE, bindings = <&macro_tap &CODE>;)

#define MIRYOKU_TAPDELAY_MT(CODE) \
/ { \
  behaviors { \
    u_mt_##CODE: u_mt_##CODE { \
      compatible = "zmk,behavior-hold-tap"; \
      #binding-cells = <2>; \
      tapping-term-ms = <U_TAPPING_TERM>; \
      flavor = "tap-preferred"; \
      bindings = <&kp>, <&u_tap_##CODE>; \
    }; \
  }; \
};

#define MIRYOKU_TAPDELAY_LT(CODE) \
/ { \
  behaviors { \
    u_lt_##CODE: u_lt_##CODE { \
      compatible = "zmk,behavior-hold-tap"; \
      #binding-cells = <2>; \
      tapping-term-ms = <U_TAPPING_TERM>; \
      flavor = "tap-preferred"; \
      bindings = <&mo>, <&u_tap_##CODE>; \
    }; \
  }; \
};

#define MIRYOKU_TAPDELAY_KP(CODE) \
/ { \
  behaviors { \
    u_kp_##CODE: u_kp_##CODE { \
      compatible = "zmk,behavior-hold-tap"; \
      #binding-cells = <2>; \
      tapping-term-ms = <U_TAPPING_TERM>; \
      flavor = "tap-preferred"; \
      bindings = <&key_repeat>, <&u_tap_##CODE>; \
    }; \
  }; \
};

// #define MIRYOKU_TAPDELAY_MT_DT(MOD, TAP) \
// / { \
//   behaviors { \
//     u_mt_dt_##TAP_##MOD: u_mt_dt_##TAP_##MOD { \
//       compatible = "zmk,behavior-tap-dance"; \
//       #binding-cells = <1>; \
//       tapping-term-ms = <U_TAPPING_TERM>; \
//       flavor = "tap-preferred"; \
//       bindings = <&u_mt_##TAP>, <&u_tap_##TAP>; \
//     }; \
//   }; \
// };

// #define MIRYOKU_TAPDELAY_LT_DT(MOD, TAP) \
// / { \
//   behaviors { \
//     u_lt_dt_##TAP_##MOD: u_lt_dt_##TAP_##MOD { \
//       compatible = "zmk,behavior-tap-dance"; \
//       #binding-cells = <1>; \
//       tapping-term-ms = <U_TAPPING_TERM>; \
//       flavor = "tap-preferred"; \
//       bindings = <&u_lt_##TAP>, <&u_tap_##TAP>; \
//     }; \
//   }; \
// };

// #define MIRYOKU_TAPDELAY_KP_DT(TAP) \
// / { \
//   behaviors { \
//     u_kp_dt_##TAP: u_kp_dt_##TAP { \
//       compatible = "zmk,behavior-tap-dance"; \
//       #binding-cells = <1>; \
//       tapping-term-ms = <U_TAPPING_TERM>; \
//       flavor = "tap-preferred"; \
//       bindings = <&u_kp_##TAP 0 0>, <&u_tap_##TAP>; \
//     }; \
//   }; \
// };

#define U_MT(MOD, TAP) &u_mt_##TAP MOD 0
#define U_LT(LAYER, TAP) &u_lt_##TAP LAYER 0
#define U_KP(TAP) &u_kp_##TAP 0 0

// #define U_MT_DT(MOD, TAP) &u_mt_dt_##TAP_##MOD
// #define U_LT_DT(MOD, TAP) &u_lt_dt_##TAP_##MOD
// #define U_KP_DT(TAP) &u_kp_dt_##TAP


// #define MIRYOKU_TAPDELAY_LIST_MODS \
// MIRYOKU_Y(BASE_FROW,  ) \
// MIRYOKU_Y(EXTRA_FROW, ) \
// MIRYOKU_Y(TAP_FROW,   ) \
// MIRYOKU_Y(BUTTON_FROW,) \
// MIRYOKU_Y(NAV_FROW,   ) \
// MIRYOKU_Y(MOUSE_FROW, ) \
// MIRYOKU_Y(MEDIA_FROW, ) \
// MIRYOKU_Y(NUM_FROW,   ) \
// MIRYOKU_Y(SYM_FROW,   ) \
// MIRYOKU_Y(FUN_FROW,   ) \
// MIRYOKU_Y(BASE,       ) \
// MIRYOKU_Y(EXTRA,      ) \
// MIRYOKU_Y(TAP,        ) \
// MIRYOKU_Y(BUTTON,     ) \
// MIRYOKU_Y(NAV,        ) \
// MIRYOKU_Y(MOUSE,      ) \
// MIRYOKU_Y(MEDIA,      ) \
// MIRYOKU_Y(NUM,        ) \
// MIRYOKU_Y(SYM,        ) \
// MIRYOKU_Y(FUN,        ) \
// MIRYOKU_Y(GAME,       ) \
// MIRYOKU_Y(LGUI,       ) \
// MIRYOKU_Y(LALT,       ) \
// MIRYOKU_Y(LCTRL,      ) \
// MIRYOKU_Y(LSHFT,      ) \
// MIRYOKU_Y(RGUI,       ) \
// MIRYOKU_Y(RALT,       ) \
// MIRYOKU_Y(RCTRL,      ) \
// MIRYOKU_Y(RSHFT,      ) 


#define MIRYOKU_TAPDELAY_LIST_BEHAVIORS \
MIRYOKU_X(u_bspc_del,) \
MIRYOKU_X(u_del_bspc,)

#define MIRYOKU_TAPDELAY_LIST \
MIRYOKU_X(A,) \
MIRYOKU_X(B,) \
MIRYOKU_X(C,) \
MIRYOKU_X(D,) \
MIRYOKU_X(E,) \
MIRYOKU_X(F,) \
MIRYOKU_X(G,) \
MIRYOKU_X(H,) \
MIRYOKU_X(I,) \
MIRYOKU_X(J,) \
MIRYOKU_X(K,) \
MIRYOKU_X(L,) \
MIRYOKU_X(M,) \
MIRYOKU_X(N,) \
MIRYOKU_X(O,) \
MIRYOKU_X(P,) \
MIRYOKU_X(Q,) \
MIRYOKU_X(R,) \
MIRYOKU_X(S,) \
MIRYOKU_X(T,) \
MIRYOKU_X(U,) \
MIRYOKU_X(V,) \
MIRYOKU_X(W,) \
MIRYOKU_X(X,) \
MIRYOKU_X(Y,) \
MIRYOKU_X(Z,) \
MIRYOKU_X(GRAVE,) \
MIRYOKU_X(SQT,) \
MIRYOKU_X(COMMA,) \
MIRYOKU_X(DOT,) \
MIRYOKU_X(SLASH,) \
MIRYOKU_X(ESC,) \
MIRYOKU_X(SPACE,) \
MIRYOKU_X(TAB,) \
MIRYOKU_X(RET,) \
MIRYOKU_X(BSPC,) \
MIRYOKU_X(DEL,) \
MIRYOKU_X(SEMI,)

// #define MIRYOKU_LIST \
// A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z, \
// SQT, COMMA, DOT, SLASH, ESC, SPACE, TAB, RET, BSPC, DEL, SEMI 

// #define MIRYOKU_TAPDELAY_LIST_MODS \
// BASE_FROW, EXTRA_FROW, TAP_FROW, BUTTON_FROW, NAV_FROW, MOUSE_FROW, MEDIA_FROW, NUM_FROW, SYM_FROW, FUN_FROW, \
// BASE,      EXTRA,      TAP,      BUTTON,      NAV,      MOUSE,      MEDIA,      NUM,      SYM,      FUN,      GAME, \
// LGUI, LALT, LCTRL, LSHFT, RGUI, RALT, RCTRL, RSHFT 
