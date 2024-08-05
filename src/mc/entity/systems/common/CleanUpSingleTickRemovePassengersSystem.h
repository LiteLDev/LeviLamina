#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CleanUpSingleTickRemovePassengersSystem {
public:
    // prevent constructor by default
    CleanUpSingleTickRemovePassengersSystem& operator=(CleanUpSingleTickRemovePassengersSystem const&);
    CleanUpSingleTickRemovePassengersSystem(CleanUpSingleTickRemovePassengersSystem const&);
    CleanUpSingleTickRemovePassengersSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSingleTickSystem();

    // NOLINTEND
};
