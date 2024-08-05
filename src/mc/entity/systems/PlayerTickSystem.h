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
    MCAPI static struct TickingSystemWithInfo create(bool);

    MCAPI static struct TickingSystemWithInfo createAddMovementTickNeededForCatchupSystem();

    MCAPI static void onTickAdded(struct PlayerTickComponent& component, uint64 tick);

    // NOLINTEND
};
