#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobTravelTeleportedFilterSystem {
public:
    // prevent constructor by default
    MobTravelTeleportedFilterSystem& operator=(MobTravelTeleportedFilterSystem const&);
    MobTravelTeleportedFilterSystem(MobTravelTeleportedFilterSystem const&);
    MobTravelTeleportedFilterSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@MobTravelTeleportedFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
