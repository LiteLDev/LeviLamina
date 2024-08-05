#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InstantDespawnComponent {
public:
    // prevent constructor by default
    InstantDespawnComponent& operator=(InstantDespawnComponent const&);
    InstantDespawnComponent(InstantDespawnComponent const&);
    InstantDespawnComponent();

public:
    // NOLINTBEGIN
    MCAPI void onDespawn(class Actor& actor);

    MCAPI void tick(class Actor& actor);

    // NOLINTEND
};
