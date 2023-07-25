#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimulatedPlayerPostAIStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYERPOSTAISTEPSYSTEM
public:
    SimulatedPlayerPostAIStepSystem& operator=(SimulatedPlayerPostAIStepSystem const&) = delete;
    SimulatedPlayerPostAIStepSystem(SimulatedPlayerPostAIStepSystem const&)            = delete;
    SimulatedPlayerPostAIStepSystem()                                                  = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SimulatedPlayerPostAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doSimulatedPlayerPostAIStepSystem\@SimulatedPlayerPostAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSimulatedPlayerPostAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

private:
};
