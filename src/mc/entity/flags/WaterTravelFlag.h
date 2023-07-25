#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WaterTravelFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERTRAVELFLAG
public:
    WaterTravelFlag& operator=(WaterTravelFlag const&) = delete;
    WaterTravelFlag(WaterTravelFlag const&)            = delete;
    WaterTravelFlag()                                  = delete;
#endif

public:
};
