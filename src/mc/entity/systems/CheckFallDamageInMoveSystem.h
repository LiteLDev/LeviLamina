#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CheckFallDamageInMoveSystem {
public:
    // prevent constructor by default
    CheckFallDamageInMoveSystem& operator=(CheckFallDamageInMoveSystem const&);
    CheckFallDamageInMoveSystem(CheckFallDamageInMoveSystem const&);
    CheckFallDamageInMoveSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@CheckFallDamageInMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
