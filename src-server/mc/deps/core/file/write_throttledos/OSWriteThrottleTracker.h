#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::WriteThrottledOS {

class OSWriteThrottleTracker {
public:
    // OSWriteThrottleTracker inner types declare
    // clang-format off
    struct WriteThrottleTierInfo;
    struct OSWriteThrottleStats;
    // clang-format on

    // OSWriteThrottleTracker inner types define
    struct WriteThrottleTierInfo {};

    struct OSWriteThrottleStats {};
};

} // namespace Core::WriteThrottledOS
