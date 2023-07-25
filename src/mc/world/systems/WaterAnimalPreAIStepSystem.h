#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterAnimalPreAIStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERANIMALPREAISTEPSYSTEM
public:
    WaterAnimalPreAIStepSystem& operator=(WaterAnimalPreAIStepSystem const&) = delete;
    WaterAnimalPreAIStepSystem(WaterAnimalPreAIStepSystem const&)            = delete;
    WaterAnimalPreAIStepSystem()                                             = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@WaterAnimalPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doWaterAnimalPreAIStepSystem\@WaterAnimalPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doWaterAnimalPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

private:
};
