#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Flip : int {
    None       = 0,
    RotateCW   = 1,
    RotateCCW  = 2,
    Rotate180  = 3,
    MirrorX    = 4,
    DontRotate = 5,
};
