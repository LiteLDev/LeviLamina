#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Flip : uchar {
    None = 0,
    Rotate90 = 1,
    Rotate270 = 2,
    Rotate180 = 3,
    MirrorX = 4,
    DontRotate = 5,
};
