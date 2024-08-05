#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorUpdateRidingIDSystem {
public:
    // prevent constructor by default
    ActorUpdateRidingIDSystem& operator=(ActorUpdateRidingIDSystem const&);
    ActorUpdateRidingIDSystem(ActorUpdateRidingIDSystem const&);
    ActorUpdateRidingIDSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createClearPrevRidingIDSystem();

    MCAPI static struct TickingSystemWithInfo createClearRidingIDSystem();

    MCAPI static struct TickingSystemWithInfo createUpdatePrevRidingIDSystem();

    // NOLINTEND
};
