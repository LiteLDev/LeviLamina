#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InWaterFlag {
public:
    // prevent constructor by default
    InWaterFlag& operator=(InWaterFlag const&);
    InWaterFlag(InWaterFlag const&);
    InWaterFlag();
};
