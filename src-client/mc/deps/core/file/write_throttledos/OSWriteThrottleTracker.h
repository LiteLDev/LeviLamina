#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::WriteThrottledOS {

struct OSWriteThrottleTracker {
public:
    // OSWriteThrottleTracker inner types declare
    // clang-format off
    struct OSWriteThrottleStats;
    struct WriteThrottleTierInfo;
    // clang-format on

    // OSWriteThrottleTracker inner types define
    struct OSWriteThrottleStats {};

    struct WriteThrottleTierInfo {};
};

} // namespace Core::WriteThrottledOS
