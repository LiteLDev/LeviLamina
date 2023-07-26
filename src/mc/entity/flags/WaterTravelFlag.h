#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WaterTravelFlag {

public:
    // prevent constructor by default
    WaterTravelFlag& operator=(WaterTravelFlag const&) = delete;
    WaterTravelFlag(WaterTravelFlag const&)            = delete;
    WaterTravelFlag()                                  = delete;
};
