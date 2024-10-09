#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VRFlyTravelSystem {
public:
    // prevent constructor by default
    VRFlyTravelSystem& operator=(VRFlyTravelSystem const&);
    VRFlyTravelSystem(VRFlyTravelSystem const&);
    VRFlyTravelSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createPostPlayerTravelSystem();

    MCAPI static struct TickingSystemWithInfo createPrePlayerTravelSystem();

    // NOLINTEND
};
