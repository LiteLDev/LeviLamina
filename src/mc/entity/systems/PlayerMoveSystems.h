#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMoveSystems {
public:
    // prevent constructor by default
    PlayerMoveSystems& operator=(PlayerMoveSystems const&);
    PlayerMoveSystems(PlayerMoveSystems const&);
    PlayerMoveSystems();

public:
    // NOLINTBEGIN
    // symbol: ?createApplyAutoJumpingToInputSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createApplyAutoJumpingToInputSystem();

    // symbol: ?createLocalPlayerFilterAutoJumpSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createLocalPlayerFilterAutoJumpSystem();

    // symbol: ?createPlayerPostMoveSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPlayerPostMoveSystem();

    // symbol: ?createPlayerPreMoveSystem@PlayerMoveSystems@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPlayerPreMoveSystem();

    // NOLINTEND
};
