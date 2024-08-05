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
    MCAPI void ejectAllPassengers(class Actor& owner);

    // NOLINTEND
};
