#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WitchPreAIStepSystem {

public:
    // prevent constructor by default
    WitchPreAIStepSystem& operator=(WitchPreAIStepSystem const&) = delete;
    WitchPreAIStepSystem(WitchPreAIStepSystem const&)            = delete;
    WitchPreAIStepSystem()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@WitchPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doWitchPreAIStepSystem\@WitchPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doWitchPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);
    // NOLINTEND
};
