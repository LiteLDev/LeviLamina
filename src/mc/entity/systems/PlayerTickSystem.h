#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerTickSystem {
public:
    // prevent constructor by default
    PlayerTickSystem& operator=(PlayerTickSystem const&);
    PlayerTickSystem(PlayerTickSystem const&);
    PlayerTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@PlayerTickSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo create(bool);

    // symbol: ?createAddMovementTickNeededForCatchupSystem@PlayerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createAddMovementTickNeededForCatchupSystem();

    // symbol: ?onTickAdded@PlayerTickSystem@@SAXAEAUPlayerTickComponent@@_K@Z
    MCAPI static void onTickAdded(struct PlayerTickComponent& component, uint64 tick);

    // NOLINTEND
};
