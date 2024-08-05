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
    MCAPI static struct TickingSystemWithInfo createMobPostPassengerTickSystem();

    MCAPI static struct TickingSystemWithInfo createPlayerPostPassengerTickSystem();

    // NOLINTEND
};
