#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class ImageProperties : int {
    // bitfield representation
    None           = 0,
    HasMips        = 1 << 1,
    Premultiplied  = 1 << 2,
    Dynamic        = 1 << 3,
    Xbdds          = 1 << 4,
    FilteringPoint = 1 << 5,
    InvertAlpha    = 1 << 6,
    ClearOnInit    = 1 << 7,
};

}
