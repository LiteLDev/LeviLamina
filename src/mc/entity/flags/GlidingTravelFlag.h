#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlidingTravelFlag {

public:
    // prevent constructor by default
    GlidingTravelFlag& operator=(GlidingTravelFlag const&) = delete;
    GlidingTravelFlag(GlidingTravelFlag const&)            = delete;
    GlidingTravelFlag()                                    = delete;
};
