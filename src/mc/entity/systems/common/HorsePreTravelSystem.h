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
    // symbol: ?createHorsePreTravelSystem@HorsePreTravelSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createHorsePreTravelSystem();

    // NOLINTEND
};
