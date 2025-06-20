// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define ZMK_MOUSE_DEFAULT_MOVE_VAL 900
// #define ZMK_MOUSE_DEFAULT_SCRL_VAL 35000

#define ZMK_MOUSE_DEFAULT_SCRL_VAL 70

#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_EXPONENT 0
#define U_MOUSE_SCROLL_TIME 1000
#define U_MOUSE_SCROLL_DELAY 0


#define U_BTN1 &mkp MB1
#define U_BTN2 &mkp MB2
#define U_BTN3 &mkp MB3
#define U_BTN4 &mkp MB4
#define U_BTN5 &mkp MB5

#define U_MS_D &mmv MOVE_DOWN
#define U_MS_L &mmv MOVE_LEFT
#define U_MS_R &mmv MOVE_RIGHT
#define U_MS_U &mmv MOVE_UP
#define U_WH_D &msc SCRL_DOWN
#define U_WH_L &msc SCRL_LEFT
#define U_WH_R &msc SCRL_RIGHT
#define U_WH_U &msc SCRL_UP
