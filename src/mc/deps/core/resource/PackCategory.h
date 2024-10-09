#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackCategory : int {
    Unknown       = 0x0,
    RealmsUnknown = 0x1,
    Standard      = 0x2,
    Premium       = 0x3,
    Custom        = 0x4,
    Subpack       = 0x5,
};
