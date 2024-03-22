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
    // symbol: ?accumulateHistoryChangesSystem@ClientPlayerRewindSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo accumulateHistoryChangesSystem();

    // symbol:
    // ?applyHistoryChangesToLiveEntity@ClientPlayerRewindSystem@@SAXAEBUReplayStateTrackerComponent@@AEAVEntityContext@@@Z
    MCAPI static void applyHistoryChangesToLiveEntity(struct ReplayStateTrackerComponent const&, class EntityContext&);

    // symbol: ?discardHistoryChangesSystem@ClientPlayerRewindSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo discardHistoryChangesSystem();

    // NOLINTEND
};
