#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AirTravelFlag {

public:
    // prevent constructor by default
    AirTravelFlag& operator=(AirTravelFlag const&) = delete;
    AirTravelFlag(AirTravelFlag const&)            = delete;
    AirTravelFlag()                                = delete;
};
