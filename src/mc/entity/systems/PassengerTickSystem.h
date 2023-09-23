#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PassengerTickSystem {
public:
    // prevent constructor by default
    PassengerTickSystem& operator=(PassengerTickSystem const&);
    PassengerTickSystem(PassengerTickSystem const&);
    PassengerTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createMobPostPassengerTickSystem@PassengerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createMobPostPassengerTickSystem();

    // symbol: ?createPlayerPostPassengerTickSystem@PassengerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPlayerPostPassengerTickSystem();

    // NOLINTEND
};
