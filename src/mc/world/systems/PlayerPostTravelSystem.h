#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerPostTravelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERPOSTTRAVELSYSTEM
public:
    PlayerPostTravelSystem& operator=(PlayerPostTravelSystem const&) = delete;
    PlayerPostTravelSystem(PlayerPostTravelSystem const&)            = delete;
    PlayerPostTravelSystem()                                         = delete;
#endif

public:
    /**
     * @symbol ?create\@PlayerPostTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
};
