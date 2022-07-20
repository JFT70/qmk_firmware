#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT_65_ansi_blocker_split_bs( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F,   \
    K10,   K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,    K1F,   \
    K20,    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,     K2D,    K2F,   \
       K30,    K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,   K3C,   K3D, K3F,   \
    K40,  K41,  K42,                K46,              K4A,  K4B,     K4C, K4D, K4F    \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F   }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___, K1F   }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, ___, K2D, ___, K2F   }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F   }, \
    { K40, K41, K42, ___, ___, ___, K46, ___, ___, ___, K4A, K4B, K4C, K4D, ___, K4F   }, \
}

#define LAYOUT_65_ansi_blocker_tsangan_split_bs( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E,  K0F,   \
    K10,   K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,     K1F,   \
    K20,    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D,    K2F,   \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,    K3C,    K3D, K3F,   \
    K40, K41, K42,                K46,                    K4B,        K4C, K4D, K4F    \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F   }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___, K1F   }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, ___, K2D, ___, K2F   }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F   }, \
    { K40, K41, K42, ___, ___, ___, K46, ___, ___, ___, ___, K4B, K4C, K4D, ___, K4F   }, \
}

#define LAYOUT_65_ansi_blocker_tsangan( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D,         K0F,   \
    K10,   K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,       K1F,   \
    K20,    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D,      K2F,   \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,    K3C,      K3D, K3F,   \
    K40, K41,  K42,                K46,                    K4B,         K4C, K4D, K4F    \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, ___, K0F   }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___, K1F   }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, ___, K2D, ___, K2F   }, \
    { K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F   }, \
    { K40, K41, K42, ___, ___, ___, K46, ___, ___, ___, ___, K4B, K4C, K4D, ___, K4F   }, \
}

#define LAYOUT_iso_all( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F,   \
    K10,   K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,         K1F,   \
    K20,    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K1D,  K2D,  K2F,   \
    K30,  K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,   K3C,   K3D, K3F,   \
    K40,  K41,  K42,          K44,  K46,  K48,        K4A,  K4B,     K4C, K4D, K4F    \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F   }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, ___, K1F   }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, ___, K2D, ___, K2F   }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, ___, K3F   }, \
    { K40, K41, K42, ___, K44, ___, K46, ___, K48, ___, K4A, K4B, K4C, K4D, ___, K4F   }, \
}

#define LAYOUT_all( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F,   \
    K10,   K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,    K1F,   \
    K20,    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,     K2D,    K2F,   \
    K30,  K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,   K3C,   K3D, K3F,   \
    K40,  K41,  K42,          K44,  K46,  K48,        K4A,  K4B,     K4C, K4D, K4F    \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E,   K0F   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   ___, K1F   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   ___, K2D,   ___, K2F   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   K3C,   K3D,   ___, K3F   }, \
    { K40,   K41,   K42,   ___, K44,   ___, K46,   ___, K48,   ___, K4A,   K4B,   K4C,   K4D,   ___, K4F   }, \
}
