#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobRemovePassengerSystem {
public:
    // prevent constructor by default
    MobRemovePassengerSystem& operator=(MobRemovePassengerSystem const&);
    MobRemovePassengerSystem(MobRemovePassengerSystem const&);
    MobRemovePassengerSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
