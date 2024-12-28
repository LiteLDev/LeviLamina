#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct ScopedYieldPolicy {
public:
    // prevent constructor by default
    ScopedYieldPolicy& operator=(ScopedYieldPolicy const&);
    ScopedYieldPolicy(ScopedYieldPolicy const&);
    ScopedYieldPolicy();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void YieldExecution();
    // NOLINTEND
};

} // namespace rtc
