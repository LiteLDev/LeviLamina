#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::internal {

enum class RangeCheckResult : int {
    Valid     = 0,
    Underflow = 1,
    Overflow  = 2,
    Invalid   = 3,
};

}
