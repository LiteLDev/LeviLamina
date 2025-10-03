#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockOcclusionType : int {
    Unknown        = 0,
    HalfSlab       = 1,
    Leaf           = 2,
    ThinConnects2D = 3,
    Connects2D     = 4,
    IsLiquid       = 5,
    Portal         = 6,
    Ice            = 7,
    Cactus         = 8,
    PowderSnow     = 9,
    SculkShrieker  = 10,
    Default        = 11,
};
