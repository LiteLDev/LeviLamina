#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

class RailActivatorComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _ejectLocalPlayer(::Actor const& cart, ::Player& passenger) const;

    MCNAPI void ejectAllPassengers(::Actor& owner);
    // NOLINTEND
};
