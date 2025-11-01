#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Rotation : uchar {
    // bitfield representation
    None = 0,
    Rotate90 = 1 << 0,
    Clockwise90 = 1 << 0,
    Rotate180 = 1 << 1,
    Clockwise180 = 1 << 1,
    Total = 1 << 2,
    CounterClockwise90 = Clockwise90 | Clockwise180,
    Rotate270 = Clockwise90 | Clockwise180,
};
