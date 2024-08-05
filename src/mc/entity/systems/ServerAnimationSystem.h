#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerAnimationSystem {
public:
    // prevent constructor by default
    ServerAnimationSystem& operator=(ServerAnimationSystem const&);
    ServerAnimationSystem(ServerAnimationSystem const&);
    ServerAnimationSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createInputDependentActorServerAnimationSystem();

    MCAPI static struct TickingSystemWithInfo createInputIndependentActorServerAnimationSystem();

    // NOLINTEND
};
