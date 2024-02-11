#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobTravelUpdateSpeedsSystem {
public:
    // prevent constructor by default
    MobTravelUpdateSpeedsSystem& operator=(MobTravelUpdateSpeedsSystem const&);
    MobTravelUpdateSpeedsSystem(MobTravelUpdateSpeedsSystem const&);
    MobTravelUpdateSpeedsSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createMobTravelUpdateSpeedsSystem@MobTravelUpdateSpeedsSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createMobTravelUpdateSpeedsSystem();

    // NOLINTEND
};
