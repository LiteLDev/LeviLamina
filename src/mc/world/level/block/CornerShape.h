#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CornerShape : uchar {
    None       = 0,
    InnerLeft  = 1,
    InnerRight = 2,
    OuterLeft  = 3,
    OuterRight = 4,
    Count      = 5,
};
