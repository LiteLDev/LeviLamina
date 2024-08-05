#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HangingActorMoveSystem {
public:
    // prevent constructor by default
    HangingActorMoveSystem& operator=(HangingActorMoveSystem const&);
    HangingActorMoveSystem(HangingActorMoveSystem const&);
    HangingActorMoveSystem();

public:
    // NOLINTBEGIN
    MCAPI static std::vector<struct TickingSystemWithInfo> createSystems();

    // NOLINTEND
};
