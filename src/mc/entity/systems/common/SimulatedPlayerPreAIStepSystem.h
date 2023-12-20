#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimulatedPlayerPreAIStepSystem {
public:
    // prevent constructor by default
    SimulatedPlayerPreAIStepSystem& operator=(SimulatedPlayerPreAIStepSystem const&);
    SimulatedPlayerPreAIStepSystem(SimulatedPlayerPreAIStepSystem const&);
    SimulatedPlayerPreAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@SimulatedPlayerPreAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doSimulatedPlayerPreAIStepSystem@SimulatedPlayerPreAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _doSimulatedPlayerPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    // NOLINTEND
};
