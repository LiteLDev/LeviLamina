#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class InstantDespawnComponent {
public:
    // prevent constructor by default
    InstantDespawnComponent& operator=(InstantDespawnComponent const&);
    InstantDespawnComponent(InstantDespawnComponent const&);
    InstantDespawnComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onDespawn(::Actor& actor);

    MCAPI void tick(::Actor& actor);
    // NOLINTEND
};
