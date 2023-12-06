#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PotionMixDataEntry {
    int fromItemId;     // this+0x0
    int fromItemAux;    // this+0x4
    int reagentItemId;  // this+0x8
    int reagentItemAux; // this+0xC
    int toItemId;       // this+0x10
    int toItemAux;      // this+0x14
};
