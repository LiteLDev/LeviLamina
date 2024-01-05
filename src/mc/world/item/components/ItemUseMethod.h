#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemUseMethod : int {
    Unknown    = -1,
    EquipArmor = 0x0,
    Eat        = 0x1,
    Attack     = 0x2,
    Consume    = 0x3,
    Throw      = 0x4,
    Shoot      = 0x5,
    Place      = 0x6,
    FillBottle = 0x7,
    FillBucket = 0x8,
    PourBucket = 0x9,
    UseTool    = 0xa,
    Interact   = 0xb,
    Retrieved  = 0xc,
    Dyed       = 0xd,
    Traded     = 0xe,
    Count      = 0xf,
};
