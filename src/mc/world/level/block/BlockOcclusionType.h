#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockOcclusionType : int {
    Unknown       = 0,
    HalfSlab      = 1,
    Leaf          = 2,
    Connects2D    = 3,
    IsLiquid      = 4,
    Portal        = 5,
    Ice           = 6,
    Cactus        = 7,
    PowderSnow    = 8,
    SculkShrieker = 9,
    Default       = 10,
};
