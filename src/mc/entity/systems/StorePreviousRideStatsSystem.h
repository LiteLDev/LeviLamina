#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StorePreviousRideStatsSystem {
public:
    // prevent constructor by default
    StorePreviousRideStatsSystem& operator=(StorePreviousRideStatsSystem const&);
    StorePreviousRideStatsSystem(StorePreviousRideStatsSystem const&);
    StorePreviousRideStatsSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _storePreviousRideStats(
        class StrictEntityContext const&,
        struct StateVectorComponent const&     stateVectorComponent,
        struct VanillaClientGameplayComponent& vanillaClientGameplayComponent
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
