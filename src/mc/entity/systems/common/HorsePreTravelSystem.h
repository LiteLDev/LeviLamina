#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HorsePreTravelSystem {
public:
    // prevent constructor by default
    HorsePreTravelSystem& operator=(HorsePreTravelSystem const&);
    HorsePreTravelSystem(HorsePreTravelSystem const&);
    HorsePreTravelSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createHorsePreTravelSystem();

    // NOLINTEND
};
