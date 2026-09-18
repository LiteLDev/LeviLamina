#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct ReplayStateTrackerComponent;
// clang-format on

class ClientPlayerRewindSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void applyHistoryChangesToLiveEntity(
        ::ReplayStateTrackerComponent const& postSimulationState,
        ::EntityContext&                     liveData
    );
    // NOLINTEND
};
