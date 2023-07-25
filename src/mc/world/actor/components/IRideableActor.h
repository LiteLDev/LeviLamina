#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RideableComponentHelpers {

class IRideableActor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEABLECOMPONENTHELPERS_IRIDEABLEACTOR
public:
    IRideableActor& operator=(IRideableActor const&) = delete;
    IRideableActor(IRideableActor const&)            = delete;
    IRideableActor()                                 = delete;
#endif

public:
};

}; // namespace RideableComponentHelpers
