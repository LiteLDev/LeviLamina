#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GroundTravelFlag {
public:
    // prevent constructor by default
    GroundTravelFlag& operator=(GroundTravelFlag const&);
    GroundTravelFlag(GroundTravelFlag const&);
    GroundTravelFlag();
};
