#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class RailActivatorComponent {
public:
    // prevent constructor by default
    RailActivatorComponent& operator=(RailActivatorComponent const&);
    RailActivatorComponent(RailActivatorComponent const&);
    RailActivatorComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ejectAllPassengers(::Actor& owner);
    // NOLINTEND
};
