#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExitVehicleSystem {
public:
    // prevent constructor by default
    ExitVehicleSystem& operator=(ExitVehicleSystem const&);
    ExitVehicleSystem(ExitVehicleSystem const&);
    ExitVehicleSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem(class BaseGameVersion const& version, bool isClient);

    // NOLINTEND
};
