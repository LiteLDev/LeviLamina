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
    MCNAPI static ::TickingSystemWithInfo createActorMoveSystem();

    MCNAPI static ::TickingSystemWithInfo createConfigureDepenetrationSystem();

    MCNAPI static ::TickingSystemWithInfo createUpdateDepenetrationSystem();
    // NOLINTEND
};
