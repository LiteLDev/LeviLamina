#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TravelMoveRequestSystem {
public:
    // prevent constructor by default
    TravelMoveRequestSystem& operator=(TravelMoveRequestSystem const&);
    TravelMoveRequestSystem(TravelMoveRequestSystem const&);
    TravelMoveRequestSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@TravelMoveRequestSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
