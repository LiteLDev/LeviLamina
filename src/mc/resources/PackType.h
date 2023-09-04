#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackType : schar {
    Invalid       = 0x0,
    Addon         = 0x1,
    Cached        = 0x2,
    CopyProtected = 0x3,
    Behavior      = 0x4,
    PersonaPiece  = 0x5,
    Resources     = 0x6,
    Skins         = 0x7,
    WorldTemplate = 0x8,
    Count         = 0x9,
};
