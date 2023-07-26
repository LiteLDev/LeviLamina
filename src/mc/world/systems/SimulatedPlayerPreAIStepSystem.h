#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimulatedPlayerPreAIStepSystem {

public:
    // prevent constructor by default
    SimulatedPlayerPreAIStepSystem& operator=(SimulatedPlayerPreAIStepSystem const&) = delete;
    SimulatedPlayerPreAIStepSystem(SimulatedPlayerPreAIStepSystem const&)            = delete;
    SimulatedPlayerPreAIStepSystem()                                                 = delete;

public:
    /**
     * @symbol ?createSystem\@SimulatedPlayerPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doSimulatedPlayerPreAIStepSystem\@SimulatedPlayerPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void
    _doSimulatedPlayerPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&); // NOLINT

private:
};
