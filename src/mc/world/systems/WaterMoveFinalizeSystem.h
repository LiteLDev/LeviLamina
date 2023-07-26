#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterMoveFinalizeSystem {

public:
    // prevent constructor by default
    WaterMoveFinalizeSystem& operator=(WaterMoveFinalizeSystem const&) = delete;
    WaterMoveFinalizeSystem(WaterMoveFinalizeSystem const&)            = delete;
    WaterMoveFinalizeSystem()                                          = delete;

public:
    /**
     * @symbol ?createWaterMoveFinalizeSystem\@WaterMoveFinalizeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterMoveFinalizeSystem(); // NOLINT
};
