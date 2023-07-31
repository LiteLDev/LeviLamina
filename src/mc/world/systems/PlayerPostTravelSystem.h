#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerPostTravelSystem {

public:
    // prevent constructor by default
    PlayerPostTravelSystem& operator=(PlayerPostTravelSystem const&) = delete;
    PlayerPostTravelSystem(PlayerPostTravelSystem const&)            = delete;
    PlayerPostTravelSystem()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?create\@PlayerPostTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    // NOLINTEND
};
