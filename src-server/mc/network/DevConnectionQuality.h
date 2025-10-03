#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DevConnectionQuality : int {
    Off      = 0,
    NoLimit  = 1,
    Phone4g  = 2,
    Phone3g  = 3,
    Slow     = 4,
    VerySlow = 5,
};
