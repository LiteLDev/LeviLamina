#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRefreshComponentsSystem {
public:
    // prevent constructor by default
    ActorRefreshComponentsSystem& operator=(ActorRefreshComponentsSystem const&);
    ActorRefreshComponentsSystem(ActorRefreshComponentsSystem const&);
    ActorRefreshComponentsSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@ActorRefreshComponentsSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
