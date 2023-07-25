#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SheepPreAIStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEEPPREAISTEPSYSTEM
public:
    SheepPreAIStepSystem& operator=(SheepPreAIStepSystem const&) = delete;
    SheepPreAIStepSystem(SheepPreAIStepSystem const&)            = delete;
    SheepPreAIStepSystem()                                       = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SheepPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doSheepPreAIStepSystem\@SheepPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSheepPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

private:
};
