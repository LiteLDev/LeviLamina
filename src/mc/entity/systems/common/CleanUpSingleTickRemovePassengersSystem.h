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
    // symbol: ?createSingleTickSystem@CleanUpSingleTickRemovePassengersSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSingleTickSystem();

    // NOLINTEND
};
