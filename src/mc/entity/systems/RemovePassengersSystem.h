#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RemovePassengersSystem {
public:
    // prevent constructor by default
    RemovePassengersSystem& operator=(RemovePassengersSystem const&);
    RemovePassengersSystem(RemovePassengersSystem const&);
    RemovePassengersSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createRemovePassengersSystem();

    MCAPI static struct TickingSystemWithInfo createVehicleRemovePassengersSystem();

    // NOLINTEND
};
