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

    MCNAPI static void applyHistoryChangesToLiveEntity(
        ::ReplayStateTrackerComponent const& postSimulationState,
        ::EntityContext&                     liveData
    );

    MCNAPI_C static ::TickingSystemWithInfo createCorrectionInterpolationSystem();

    MCNAPI_C static ::TickingSystemWithInfo createRewindHistorySystem();

    MCNAPI_C static ::TickingSystemWithInfo createSystem();

    MCNAPI static ::TickingSystemWithInfo discardHistoryChangesSystem();

    MCNAPI_C static ::TickingSystemWithInfo publishHistoryChangesSystem();
    // NOLINTEND
};
