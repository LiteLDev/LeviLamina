#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerResetMovementSpeedSystem {
public:
    // prevent constructor by default
    PlayerResetMovementSpeedSystem& operator=(PlayerResetMovementSpeedSystem const&);
    PlayerResetMovementSpeedSystem(PlayerResetMovementSpeedSystem const&);
    PlayerResetMovementSpeedSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PlayerResetMovementSpeedSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
