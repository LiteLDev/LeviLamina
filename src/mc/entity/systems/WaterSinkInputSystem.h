#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterSinkInputSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERSINKINPUTSYSTEM
public:
    WaterSinkInputSystem& operator=(WaterSinkInputSystem const&) = delete;
    WaterSinkInputSystem(WaterSinkInputSystem const&)            = delete;
    WaterSinkInputSystem()                                       = delete;
#endif

public:
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
};
