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
    // symbol: ?createServerAnimationSystem@ServerAnimationSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createServerAnimationSystem();

    // NOLINTEND
};
