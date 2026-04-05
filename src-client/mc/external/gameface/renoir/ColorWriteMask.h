#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class ColorWriteMask : int {
    // bitfield representation
    None  = 0,
    Red   = 1 << 0,
    Green = 1 << 1,
    Blue  = 1 << 2,
    Alpha = 1 << 3,
    All   = Red | Green | Blue | Alpha,
};

}
