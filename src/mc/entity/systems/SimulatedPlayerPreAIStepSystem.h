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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doSimulatedPlayerPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent& actorOwnerComponent);

    // NOLINTEND
};
