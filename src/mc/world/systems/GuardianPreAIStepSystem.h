#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GuardianPreAIStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIANPREAISTEPSYSTEM
public:
    GuardianPreAIStepSystem& operator=(GuardianPreAIStepSystem const&) = delete;
    GuardianPreAIStepSystem(GuardianPreAIStepSystem const&)            = delete;
    GuardianPreAIStepSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@GuardianPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doGuardianPreAIStepSystem\@GuardianPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doGuardianPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

private:
};
