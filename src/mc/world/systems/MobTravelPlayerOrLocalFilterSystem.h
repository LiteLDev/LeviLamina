#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobTravelPlayerOrLocalFilterSystem {

public:
    // prevent constructor by default
    MobTravelPlayerOrLocalFilterSystem& operator=(MobTravelPlayerOrLocalFilterSystem const&) = delete;
    MobTravelPlayerOrLocalFilterSystem(MobTravelPlayerOrLocalFilterSystem const&)            = delete;
    MobTravelPlayerOrLocalFilterSystem()                                                     = delete;

public:
    /**
     * @symbol ?create\@MobTravelPlayerOrLocalFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
};
