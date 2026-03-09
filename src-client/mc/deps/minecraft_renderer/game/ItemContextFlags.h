#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemContextFlags : uchar {
    // bitfield representation
    None            = 0,
    FirstPersonPass = 1 << 0,
    WorldPass       = 1 << 1,
    UIPass          = 1 << 2,
    Item2D          = 1 << 3,
    Item3D          = 1 << 4,
    InHand          = 1 << 5,
    Glint           = 1 << 6,
    MultiColorTint  = 1 << 7,
};
