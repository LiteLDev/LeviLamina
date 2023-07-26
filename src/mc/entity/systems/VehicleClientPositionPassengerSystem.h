#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VehicleClientPositionPassengerSystem {

public:
    // prevent constructor by default
    VehicleClientPositionPassengerSystem& operator=(VehicleClientPositionPassengerSystem const&) = delete;
    VehicleClientPositionPassengerSystem(VehicleClientPositionPassengerSystem const&)            = delete;
    VehicleClientPositionPassengerSystem()                                                       = delete;

public:
    /**
     * @symbol ?createSetPositionRequestSystem\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPositionRequestSystem(); // NOLINT
    /**
     * @symbol ?createSetPreviousPosRotSystem\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPreviousPosRotSystem(); // NOLINT
    /**
     * @symbol ?createSetRotationLock\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetRotationLock(); // NOLINT
};
