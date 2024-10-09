#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StopRidingRequestFlag {
public:
    // prevent constructor by default
    StopRidingRequestFlag& operator=(StopRidingRequestFlag const&);
    StopRidingRequestFlag(StopRidingRequestFlag const&);
    StopRidingRequestFlag();
};
