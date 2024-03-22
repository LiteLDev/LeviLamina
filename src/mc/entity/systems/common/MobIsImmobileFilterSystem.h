#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobIsImmobileFilterSystem {
public:
    // prevent constructor by default
    MobIsImmobileFilterSystem& operator=(MobIsImmobileFilterSystem const&);
    MobIsImmobileFilterSystem(MobIsImmobileFilterSystem const&);
    MobIsImmobileFilterSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@MobIsImmobileFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
