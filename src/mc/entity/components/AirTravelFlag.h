#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AirTravelFlag {
public:
    // prevent constructor by default
    AirTravelFlag& operator=(AirTravelFlag const&);
    AirTravelFlag(AirTravelFlag const&);
    AirTravelFlag();
};
