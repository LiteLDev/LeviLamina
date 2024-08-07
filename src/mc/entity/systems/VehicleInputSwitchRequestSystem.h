#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VehicleInputSwitchRequestSystem {
public:
    // prevent constructor by default
    VehicleInputSwitchRequestSystem& operator=(VehicleInputSwitchRequestSystem const&);
    VehicleInputSwitchRequestSystem(VehicleInputSwitchRequestSystem const&);
    VehicleInputSwitchRequestSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
