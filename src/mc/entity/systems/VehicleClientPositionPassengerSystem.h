#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VehicleClientPositionPassengerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLECLIENTPOSITIONPASSENGERSYSTEM
public:
    VehicleClientPositionPassengerSystem& operator=(VehicleClientPositionPassengerSystem const&) = delete;
    VehicleClientPositionPassengerSystem(VehicleClientPositionPassengerSystem const&)            = delete;
    VehicleClientPositionPassengerSystem()                                                       = delete;
#endif

public:
    /**
     * @symbol ?createSetPositionRequestSystem\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPositionRequestSystem();
    /**
     * @symbol ?createSetPreviousPosRotSystem\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPreviousPosRotSystem();
    /**
     * @symbol ?createSetRotationLock\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetRotationLock();
};
