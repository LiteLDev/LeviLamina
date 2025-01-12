#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct ScopedYieldPolicy {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void YieldExecution();
    // NOLINTEND
};

} // namespace rtc
