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
    MCAPI static struct TickingSystemWithInfo createActorDataSyncSystem();

    // NOLINTEND
};
