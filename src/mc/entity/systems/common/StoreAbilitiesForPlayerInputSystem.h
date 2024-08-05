#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StoreAbilitiesForPlayerInputSystem {
public:
    // prevent constructor by default
    StoreAbilitiesForPlayerInputSystem& operator=(StoreAbilitiesForPlayerInputSystem const&);
    StoreAbilitiesForPlayerInputSystem(StoreAbilitiesForPlayerInputSystem const&);
    StoreAbilitiesForPlayerInputSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
