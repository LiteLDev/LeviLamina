#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PotionMixDataEntry {
    int32_t fromItemId;     // this+0x0
    int32_t fromItemAux;    // this+0x4
    int32_t reagentItemId;  // this+0x8
    int32_t reagentItemAux; // this+0xC
    int32_t toItemId;       // this+0x10
    int32_t toItemAux;      // this+0x14
};