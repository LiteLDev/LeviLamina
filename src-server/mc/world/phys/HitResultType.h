#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HitResultType : int {
    Tile             = 0,
    Entity           = 1,
    EntityOutOfRange = 2,
    NoHit            = 3,
};
