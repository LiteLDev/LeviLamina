#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WitchPreAIStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITCHPREAISTEPSYSTEM
public:
    WitchPreAIStepSystem& operator=(WitchPreAIStepSystem const&) = delete;
    WitchPreAIStepSystem(WitchPreAIStepSystem const&)            = delete;
    WitchPreAIStepSystem()                                       = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@WitchPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doWitchPreAIStepSystem\@WitchPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doWitchPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

private:
};
