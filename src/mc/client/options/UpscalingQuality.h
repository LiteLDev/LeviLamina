#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class UpscalingQuality : uchar {
    Automatic     = 0,
    OneThird      = 33,
    OneHalf       = 50,
    TwoThirds     = 66,
    ThreeQuarters = 75,
    Native        = 100,
};
