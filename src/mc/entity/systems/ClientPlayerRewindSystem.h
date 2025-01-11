#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct ReplayStateTrackerComponent;
struct TickingSystemWithInfo;
// clang-format on

class ClientPlayerRewindSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo accumulateHistoryChangesSystem();

    MCAPI static void applyHistoryChangesToLiveEntity(
        ::ReplayStateTrackerComponent const& postSimulationState,
        ::EntityContext&                     liveData
    );

    MCAPI static ::TickingSystemWithInfo discardHistoryChangesSystem();
    // NOLINTEND
};
