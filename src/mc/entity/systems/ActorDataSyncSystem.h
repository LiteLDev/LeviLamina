#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDataSyncSystem {

public:
    // prevent constructor by default
    ActorDataSyncSystem& operator=(ActorDataSyncSystem const&) = delete;
    ActorDataSyncSystem(ActorDataSyncSystem const&)            = delete;
    ActorDataSyncSystem()                                      = delete;

public:
    /**
     * @symbol ?createActorDataSyncSystem\@ActorDataSyncSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorDataSyncSystem(); // NOLINT
};
