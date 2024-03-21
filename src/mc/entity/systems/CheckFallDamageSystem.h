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
    // symbol: ?createSystem@CheckFallDamageSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // symbol: ?createVehicleResetFallDistanceSystem@CheckFallDamageSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createVehicleResetFallDistanceSystem();

    // NOLINTEND
};
