#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GroundTravelFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDTRAVELFLAG
public:
    GroundTravelFlag& operator=(GroundTravelFlag const&) = delete;
    GroundTravelFlag(GroundTravelFlag const&)            = delete;
    GroundTravelFlag()                                   = delete;
#endif

public:
};
