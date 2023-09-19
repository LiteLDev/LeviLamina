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
    // symbol: ?onDespawn@InstantDespawnComponent@@QEAAXAEAVActor@@@Z
    MCAPI void onDespawn(class Actor&);

    // symbol: ?tick@InstantDespawnComponent@@QEAAXAEAVActor@@@Z
    MCAPI void tick(class Actor&);

    // NOLINTEND
};
