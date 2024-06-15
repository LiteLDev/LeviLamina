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
    // symbol:
    // ?_storePreviousRideStats@StorePreviousRideStatsSystem@@SAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAUVanillaClientGameplayComponent@@@Z
    MCAPI static void
    _storePreviousRideStats(class StrictEntityContext const&, struct StateVectorComponent const&, struct VanillaClientGameplayComponent&);

    // symbol: ?createSystem@StorePreviousRideStatsSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
