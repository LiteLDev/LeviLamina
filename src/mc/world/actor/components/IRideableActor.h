#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RideableComponentHelpers {

class IRideableActor {
public:
    // prevent constructor by default
    IRideableActor& operator=(IRideableActor const&);
    IRideableActor(IRideableActor const&);
    IRideableActor();
};

}; // namespace RideableComponentHelpers
