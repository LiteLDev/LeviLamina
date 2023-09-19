#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerPostTravelSystem {
public:
    // prevent constructor by default
    PlayerPostTravelSystem& operator=(PlayerPostTravelSystem const&);
    PlayerPostTravelSystem(PlayerPostTravelSystem const&);
    PlayerPostTravelSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@PlayerPostTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
