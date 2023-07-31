#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterSinkInputSystem {

public:
    // prevent constructor by default
    WaterSinkInputSystem& operator=(WaterSinkInputSystem const&) = delete;
    WaterSinkInputSystem(WaterSinkInputSystem const&)            = delete;
    WaterSinkInputSystem()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createWaterSinkInputSystem\@WaterSinkInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWaterSinkInputSystem();
    /**
     * @symbol
     * ?doInWaterSinkInputSystem\@WaterSinkInputSystem\@\@SAXAEBUAbilitiesComponent\@\@AEBUMoveInputComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void
    doInWaterSinkInputSystem(struct AbilitiesComponent const&, struct MoveInputComponent const&, struct StateVectorComponent&);
    // NOLINTEND
};
