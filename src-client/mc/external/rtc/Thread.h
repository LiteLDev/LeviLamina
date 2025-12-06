#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct Thread {
public:
    // Thread inner types declare
    // clang-format off
    struct CurrentThreadSetter;
    struct DelayedMessage;
    struct ScopedDisallowBlockingCalls;
    // clang-format on

    // Thread inner types define
    struct CurrentThreadSetter {};

    struct DelayedMessage {};

    struct ScopedDisallowBlockingCalls {};
};

} // namespace rtc
