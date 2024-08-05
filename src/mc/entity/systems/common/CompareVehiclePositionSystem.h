#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompareVehiclePositionSystem {
public:
    // prevent constructor by default
    CompareVehiclePositionSystem& operator=(CompareVehiclePositionSystem const&);
    CompareVehiclePositionSystem(CompareVehiclePositionSystem const&);
    CompareVehiclePositionSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
