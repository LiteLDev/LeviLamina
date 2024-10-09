#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlidingTravelFlag {
public:
    // prevent constructor by default
    GlidingTravelFlag& operator=(GlidingTravelFlag const&);
    GlidingTravelFlag(GlidingTravelFlag const&);
    GlidingTravelFlag();
};
