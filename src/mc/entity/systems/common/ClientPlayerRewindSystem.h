#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientPlayerRewindSystem {
public:
    // prevent constructor by default
    ClientPlayerRewindSystem& operator=(ClientPlayerRewindSystem const&);
    ClientPlayerRewindSystem(ClientPlayerRewindSystem const&);
    ClientPlayerRewindSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo accumulateHistoryChangesSystem();

    MCAPI static void applyHistoryChangesToLiveEntity(struct ReplayStateTrackerComponent const&, class EntityContext&);

    MCAPI static struct TickingSystemWithInfo discardHistoryChangesSystem();

    // NOLINTEND
};
