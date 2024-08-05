#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CheckFallDamageSystem {
public:
    // prevent constructor by default
    CheckFallDamageSystem& operator=(CheckFallDamageSystem const&);
    CheckFallDamageSystem(CheckFallDamageSystem const&);
    CheckFallDamageSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static struct TickingSystemWithInfo createVehicleResetFallDistanceSystem();

    // NOLINTEND
};
