#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobTravelTeleportedFilterSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBTRAVELTELEPORTEDFILTERSYSTEM
public:
    MobTravelTeleportedFilterSystem& operator=(MobTravelTeleportedFilterSystem const&) = delete;
    MobTravelTeleportedFilterSystem(MobTravelTeleportedFilterSystem const&)            = delete;
    MobTravelTeleportedFilterSystem()                                                  = delete;
#endif

public:
    /**
     * @symbol ?create\@MobTravelTeleportedFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
};
