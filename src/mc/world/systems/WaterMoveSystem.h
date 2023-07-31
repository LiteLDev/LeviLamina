#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMoveSystem {

public:
    // prevent constructor by default
    WaterMoveSystem& operator=(WaterMoveSystem const&) = delete;
    WaterMoveSystem(WaterMoveSystem const&)            = delete;
    WaterMoveSystem()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createWaterMoveSystem\@WaterMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterMoveSystem();
    // NOLINTEND
};
