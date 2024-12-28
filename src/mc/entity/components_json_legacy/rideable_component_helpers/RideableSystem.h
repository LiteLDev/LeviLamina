#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RideableComponentHelpers {

class RideableSystem {
public:
    // prevent constructor by default
    RideableSystem& operator=(RideableSystem const&);
    RideableSystem(RideableSystem const&);
    RideableSystem();
};

} // namespace RideableComponentHelpers
