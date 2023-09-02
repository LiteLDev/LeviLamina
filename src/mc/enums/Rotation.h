#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Rotation : uchar {
    None      = 0x0,
    Rotate90  = 0x1,
    Rotate180 = 0x2,
    Rotate270 = 0x3,
    Total     = 0x4,
};
