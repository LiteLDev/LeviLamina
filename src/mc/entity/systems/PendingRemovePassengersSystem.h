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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
