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

#ifdef LL_PLAT_C
    MCAPI static ::TickingSystemWithInfo createCorrectionInterpolationSystem();

    MCAPI static ::TickingSystemWithInfo createRewindHistorySystem();

    MCAPI static ::TickingSystemWithInfo createSystem();
#endif

    MCAPI static ::TickingSystemWithInfo discardHistoryChangesSystem();

#ifdef LL_PLAT_C
    MCAPI static ::TickingSystemWithInfo publishHistoryChangesSystem();
#endif
    // NOLINTEND
};
