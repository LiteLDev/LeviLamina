#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class ActorMoveSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createActorMoveSystem();

    MCAPI static ::TickingSystemWithInfo createConfigureDepenetrationSystem();

    MCAPI static ::TickingSystemWithInfo createUpdateDepenetrationSystem();

    MCAPI static ::TickingSystemWithInfo createUpdateHitboxSystem();
    // NOLINTEND
};
