#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CornerHandleFlag : uchar {
    // bitfield representation
    Z = 1 << 0,
    Y = 1 << 1,
    X = 1 << 2,
};
