#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HitResultType : int32_t {
    Tile             = 0x0,
    Entity           = 0x1,
    EntityOutOfRange = 0x2,
    NoHit            = 0x3,
};
