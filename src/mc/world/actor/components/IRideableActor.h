#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RideableComponentHelpers {

class IRideableActor {

public:
    // prevent constructor by default
    IRideableActor& operator=(IRideableActor const&) = delete;
    IRideableActor(IRideableActor const&)            = delete;
    IRideableActor()                                 = delete;
};

}; // namespace RideableComponentHelpers
