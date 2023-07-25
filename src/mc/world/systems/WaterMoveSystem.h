#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVESYSTEM
public:
    WaterMoveSystem& operator=(WaterMoveSystem const&) = delete;
    WaterMoveSystem(WaterMoveSystem const&)            = delete;
    WaterMoveSystem()                                  = delete;
#endif

public:
    /**
     * @symbol ?createWaterMoveSystem\@WaterMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterMoveSystem();
};
