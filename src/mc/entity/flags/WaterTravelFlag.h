#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WaterTravelFlag {
public:
    // prevent constructor by default
    WaterTravelFlag& operator=(WaterTravelFlag const&);
    WaterTravelFlag(WaterTravelFlag const&);
    WaterTravelFlag();
};
