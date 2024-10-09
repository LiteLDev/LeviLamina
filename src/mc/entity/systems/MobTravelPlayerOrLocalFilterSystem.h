#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobTravelPlayerOrLocalFilterSystem {
public:
    // prevent constructor by default
    MobTravelPlayerOrLocalFilterSystem& operator=(MobTravelPlayerOrLocalFilterSystem const&);
    MobTravelPlayerOrLocalFilterSystem(MobTravelPlayerOrLocalFilterSystem const&);
    MobTravelPlayerOrLocalFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
