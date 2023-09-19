#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReplayStateSystem {
public:
    // prevent constructor by default
    ReplayStateSystem& operator=(ReplayStateSystem const&);
    ReplayStateSystem(ReplayStateSystem const&);
    ReplayStateSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createAddReplayStateComponentSystem@ReplayStateSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createAddReplayStateComponentSystem();

    // symbol: ?createReplayStateSystem@ReplayStateSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createReplayStateSystem();

    // NOLINTEND
};
