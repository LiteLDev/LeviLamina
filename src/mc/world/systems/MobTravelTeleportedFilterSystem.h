#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobTravelTeleportedFilterSystem {

public:
    // prevent constructor by default
    MobTravelTeleportedFilterSystem& operator=(MobTravelTeleportedFilterSystem const&) = delete;
    MobTravelTeleportedFilterSystem(MobTravelTeleportedFilterSystem const&)            = delete;
    MobTravelTeleportedFilterSystem()                                                  = delete;

public:
    /**
     * @symbol ?create\@MobTravelTeleportedFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
};
