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
    // symbol: ?createPostPlayerTravelSystem@VRFlyTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPostPlayerTravelSystem();

    // symbol: ?createPrePlayerTravelSystem@VRFlyTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPrePlayerTravelSystem();

    // NOLINTEND
};
