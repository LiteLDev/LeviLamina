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
    // symbol: ?createSetPositionRequestSystem@VehicleClientPositionPassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSetPositionRequestSystem();

    // symbol: ?createSetPreviousPosRotSystem@VehicleClientPositionPassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSetPreviousPosRotSystem();

    // symbol: ?createSetRotationLock@VehicleClientPositionPassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSetRotationLock();

    // NOLINTEND
};
