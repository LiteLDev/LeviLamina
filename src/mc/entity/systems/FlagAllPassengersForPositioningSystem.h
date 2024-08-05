#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlagAllPassengersForPositioningSystem {
public:
    // prevent constructor by default
    FlagAllPassengersForPositioningSystem& operator=(FlagAllPassengersForPositioningSystem const&);
    FlagAllPassengersForPositioningSystem(FlagAllPassengersForPositioningSystem const&);
    FlagAllPassengersForPositioningSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
