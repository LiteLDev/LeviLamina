#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateServerPlayerInputSystem {
public:
    // prevent constructor by default
    UpdateServerPlayerInputSystem& operator=(UpdateServerPlayerInputSystem const&);
    UpdateServerPlayerInputSystem(UpdateServerPlayerInputSystem const&);
    UpdateServerPlayerInputSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createPlayerInputUpdateSystem@UpdateServerPlayerInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPlayerInputUpdateSystem();

    // symbol: ?createSneakUpdateSystem@UpdateServerPlayerInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSneakUpdateSystem();

    // NOLINTEND
};
