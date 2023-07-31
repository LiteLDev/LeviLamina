#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRefreshComponentsSystem {

public:
    // prevent constructor by default
    ActorRefreshComponentsSystem& operator=(ActorRefreshComponentsSystem const&) = delete;
    ActorRefreshComponentsSystem(ActorRefreshComponentsSystem const&)            = delete;
    ActorRefreshComponentsSystem()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@ActorRefreshComponentsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};
