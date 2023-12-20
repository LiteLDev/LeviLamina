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
    // symbol: ?createInputDependentActorServerAnimationSystem@ServerAnimationSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createInputDependentActorServerAnimationSystem();

    // symbol: ?createInputIndependentActorServerAnimationSystem@ServerAnimationSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createInputIndependentActorServerAnimationSystem();

    // NOLINTEND
};
