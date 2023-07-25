#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VehicleInputSwitchRequestSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLEINPUTSWITCHREQUESTSYSTEM
public:
    VehicleInputSwitchRequestSystem& operator=(VehicleInputSwitchRequestSystem const&) = delete;
    VehicleInputSwitchRequestSystem(VehicleInputSwitchRequestSystem const&)            = delete;
    VehicleInputSwitchRequestSystem()                                                  = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@VehicleInputSwitchRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
