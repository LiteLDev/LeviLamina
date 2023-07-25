#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobTravelPlayerOrLocalFilterSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBTRAVELPLAYERORLOCALFILTERSYSTEM
public:
    MobTravelPlayerOrLocalFilterSystem& operator=(MobTravelPlayerOrLocalFilterSystem const&) = delete;
    MobTravelPlayerOrLocalFilterSystem(MobTravelPlayerOrLocalFilterSystem const&)            = delete;
    MobTravelPlayerOrLocalFilterSystem()                                                     = delete;
#endif

public:
    /**
     * @symbol ?create\@MobTravelPlayerOrLocalFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
};
