#pragma once

#include "quantum.h"


#define LAYOUT_ortho_7x7( \
    L00, L01, L02, L03, L04, L05, L06,   R00, R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15, L16,   R10, R11, R12, R13, R14, R15, R16, \
    L20, L21, L22, L23, L24, L25, L26,   R20, R21, R22, R23, R24, R25, R26, \
         L31, L32, L33, L34, L35, L36,   R30, R31, R32, R33, R34, R35, R36, \
         L41, L42, L43, L44, L45,             R41, R42, R43, R44, R45, R46, \
    L50, L51, L52, L53,      L55, L56,   R50, R51, R52,           R55,      \
    L60, L61, L62, L63, L64, L65, L66,   R60, R61, R62, R63, R64, R65, R66 \
) { \
    { L00,   L01,   L02,   L03,   L04,   L05,   L06 }, \
    { L10,   L11,   L12,   L13,   L14,   L15,   L16 }, \
    { L20,   L21,   L22,   L23,   L24,   L25,   L26 }, \
    { KC_NO, L31,   L32,   L33,   L34,   L35,   L36 }, \
    { KC_NO, L41,   L42,   L43,   L44,   L45,   KC_NO }, \
    { L50,   L51,   L52,   L53,   KC_NO, L55,   L56 }, \
    { L60,   L61,   L62,   L63,   L64,   L65,   L66 }, \
\
    { R00,   R01,   R02,   R03,   R04,   R05,   R06 }, \
    { R10,   R11,   R12,   R13,   R14,   R15,   R16 }, \
    { R20,   R21,   R22,   R23,   R24,   R25,   R26 }, \
    { R30,   R31,   R32,   R33,   R34,   R35,   R36 }, \
    { KC_NO, R41,   R42,   R43,   R44,   R45,   R46 }, \
    { R50,   R51,   R52,   KC_NO, KC_NO, R55,   KC_NO }, \
    { R60,   R61,   R62,   R63,   R64,   R65,   R66 } \
}
