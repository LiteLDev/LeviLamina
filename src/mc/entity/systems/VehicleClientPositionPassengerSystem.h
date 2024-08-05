#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VehicleClientPositionPassengerSystem {
public:
    // prevent constructor by default
    VehicleClientPositionPassengerSystem& operator=(VehicleClientPositionPassengerSystem const&);
    VehicleClientPositionPassengerSystem(VehicleClientPositionPassengerSystem const&);
    VehicleClientPositionPassengerSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSetPositionRequestSystem();

    MCAPI static struct TickingSystemWithInfo createSetPreviousPosRotSystem();

    MCAPI static struct TickingSystemWithInfo createSetRotationLock();

    // NOLINTEND
};
