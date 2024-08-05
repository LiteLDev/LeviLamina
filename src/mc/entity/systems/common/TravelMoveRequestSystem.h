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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
