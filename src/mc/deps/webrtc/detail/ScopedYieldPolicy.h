#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ScopedYieldPolicy {
public:
    // prevent constructor by default
    ScopedYieldPolicy& operator=(ScopedYieldPolicy const&);
    ScopedYieldPolicy(ScopedYieldPolicy const&);
    ScopedYieldPolicy();

public:
    // NOLINTBEGIN
    // symbol: ?YieldExecution@ScopedYieldPolicy@rtc@@SAXXZ
    MCAPI static void YieldExecution();

    // NOLINTEND
};

}; // namespace rtc
