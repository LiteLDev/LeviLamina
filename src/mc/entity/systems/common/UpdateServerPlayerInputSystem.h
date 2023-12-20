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
    // symbol: ?createSystem@UpdateServerPlayerInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
