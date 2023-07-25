#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMoveFinalizeSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVEFINALIZESYSTEM
public:
    WaterMoveFinalizeSystem& operator=(WaterMoveFinalizeSystem const&) = delete;
    WaterMoveFinalizeSystem(WaterMoveFinalizeSystem const&)            = delete;
    WaterMoveFinalizeSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createWaterMoveFinalizeSystem\@WaterMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterMoveFinalizeSystem();
};
