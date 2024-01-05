#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RailActivatorComponent {
public:
    // prevent constructor by default
    RailActivatorComponent& operator=(RailActivatorComponent const&);
    RailActivatorComponent(RailActivatorComponent const&);
    RailActivatorComponent();

public:
    // NOLINTBEGIN
    // symbol: ?ejectAllPassengers@RailActivatorComponent@@QEAAXAEAVActor@@@Z
    MCAPI void ejectAllPassengers(class Actor& owner);

    // NOLINTEND
};
