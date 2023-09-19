#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDataSyncSystem {
public:
    // prevent constructor by default
    ActorDataSyncSystem& operator=(ActorDataSyncSystem const&);
    ActorDataSyncSystem(ActorDataSyncSystem const&);
    ActorDataSyncSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createActorDataSyncSystem@ActorDataSyncSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createActorDataSyncSystem();

    // NOLINTEND
};
