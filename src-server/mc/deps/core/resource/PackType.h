#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackType : schar {
    Invalid       = 0,
    Addon         = 1,
    Cached        = 2,
    CopyProtected = 3,
    Behavior      = 4,
    PersonaPiece  = 5,
    Resources     = 6,
    Skins         = 7,
    WorldTemplate = 8,
    Count         = 9,
};
