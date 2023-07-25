#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimulatedPlayerPreAIStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYERPREAISTEPSYSTEM
public:
    SimulatedPlayerPreAIStepSystem& operator=(SimulatedPlayerPreAIStepSystem const&) = delete;
    SimulatedPlayerPreAIStepSystem(SimulatedPlayerPreAIStepSystem const&)            = delete;
    SimulatedPlayerPreAIStepSystem()                                                 = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SimulatedPlayerPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doSimulatedPlayerPreAIStepSystem\@SimulatedPlayerPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSimulatedPlayerPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

private:
};
