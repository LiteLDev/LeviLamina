#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterAnimalPreAIStepSystem {

public:
    // prevent constructor by default
    WaterAnimalPreAIStepSystem& operator=(WaterAnimalPreAIStepSystem const&) = delete;
    WaterAnimalPreAIStepSystem(WaterAnimalPreAIStepSystem const&)            = delete;
    WaterAnimalPreAIStepSystem()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@WaterAnimalPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doWaterAnimalPreAIStepSystem\@WaterAnimalPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doWaterAnimalPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);
    // NOLINTEND
};
