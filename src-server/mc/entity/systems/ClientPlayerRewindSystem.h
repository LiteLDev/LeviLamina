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
    MCNAPI static ::TickingSystemWithInfo accumulateHistoryChangesSystem();

    MCNAPI static void applyHistoryChangesToLiveEntity(::ReplayStateTrackerComponent const& postSimulationState, ::EntityContext& liveData);

    MCNAPI static ::TickingSystemWithInfo discardHistoryChangesSystem();
    // NOLINTEND

};
