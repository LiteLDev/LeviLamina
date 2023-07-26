#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StopGlidingRequestFlag {

public:
    // prevent constructor by default
    StopGlidingRequestFlag& operator=(StopGlidingRequestFlag const&) = delete;
    StopGlidingRequestFlag(StopGlidingRequestFlag const&)            = delete;
    StopGlidingRequestFlag()                                         = delete;
};
