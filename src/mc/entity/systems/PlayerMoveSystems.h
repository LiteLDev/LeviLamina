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
    MCAPI static struct TickingSystemWithInfo createLocalPlayerFilterAutoJumpSystem();

    MCAPI static struct TickingSystemWithInfo createPlayerPostMoveSystem();

    MCAPI static struct TickingSystemWithInfo createPlayerPreMoveSystem();

    // NOLINTEND
};
