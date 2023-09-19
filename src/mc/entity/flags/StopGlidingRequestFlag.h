#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StopGlidingRequestFlag {
public:
    // prevent constructor by default
    StopGlidingRequestFlag& operator=(StopGlidingRequestFlag const&);
    StopGlidingRequestFlag(StopGlidingRequestFlag const&);
    StopGlidingRequestFlag();
};
