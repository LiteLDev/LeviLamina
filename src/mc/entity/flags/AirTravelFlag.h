#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AirTravelFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AIRTRAVELFLAG
public:
    AirTravelFlag& operator=(AirTravelFlag const&) = delete;
    AirTravelFlag(AirTravelFlag const&)            = delete;
    AirTravelFlag()                                = delete;
#endif

public:
};
