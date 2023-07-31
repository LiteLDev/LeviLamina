#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SheepPreAIStepSystem {

public:
    // prevent constructor by default
    SheepPreAIStepSystem& operator=(SheepPreAIStepSystem const&) = delete;
    SheepPreAIStepSystem(SheepPreAIStepSystem const&)            = delete;
    SheepPreAIStepSystem()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@SheepPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_doSheepPreAIStepSystem\@SheepPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSheepPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);
    // NOLINTEND
};
