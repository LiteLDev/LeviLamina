#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PendingRemovePassengersSystem {
public:
    // prevent constructor by default
    PendingRemovePassengersSystem& operator=(PendingRemovePassengersSystem const&);
    PendingRemovePassengersSystem(PendingRemovePassengersSystem const&);
    PendingRemovePassengersSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createPendingRemovePassengersSystem@PendingRemovePassengersSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPendingRemovePassengersSystem();

    // NOLINTEND
};
