#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TargetResolution : uchar {
    None  = 0,
    P360  = 1,
    P480  = 2,
    P540  = 3,
    P720  = 4,
    P1080 = 5,
    P1440 = 6,
    P2160 = 7,
};
