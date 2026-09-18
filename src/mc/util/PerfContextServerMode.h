#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PerfContextServerMode : uchar {
    None      = 0,
    Local     = 1,
    Remote    = 2,
    Dedicated = 3,
};
