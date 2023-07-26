#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterAnimalPreAIStepSystem {

public:
    // prevent constructor by default
    WaterAnimalPreAIStepSystem& operator=(WaterAnimalPreAIStepSystem const&) = delete;
    WaterAnimalPreAIStepSystem(WaterAnimalPreAIStepSystem const&)            = delete;
    WaterAnimalPreAIStepSystem()                                             = delete;

public:
    /**
     * @symbol ?createSystem\@WaterAnimalPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doWaterAnimalPreAIStepSystem\@WaterAnimalPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void
    _doWaterAnimalPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&); // NOLINT

private:
};
