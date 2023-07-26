#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VehicleInputSwitchRequestSystem {

public:
    // prevent constructor by default
    VehicleInputSwitchRequestSystem& operator=(VehicleInputSwitchRequestSystem const&) = delete;
    VehicleInputSwitchRequestSystem(VehicleInputSwitchRequestSystem const&)            = delete;
    VehicleInputSwitchRequestSystem()                                                  = delete;

public:
    /**
     * @symbol ?createSystem\@VehicleInputSwitchRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
