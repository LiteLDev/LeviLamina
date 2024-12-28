#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ActorUpdateRidingIDSystem {
public:
    // prevent constructor by default
    ActorUpdateRidingIDSystem& operator=(ActorUpdateRidingIDSystem const&);
    ActorUpdateRidingIDSystem(ActorUpdateRidingIDSystem const&);
    ActorUpdateRidingIDSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createClearPrevRidingIDSystem();

    MCAPI static ::TickingSystemWithInfo createClearRidingIDSystem();

    MCAPI static ::TickingSystemWithInfo createUpdatePrevRidingIDSystem();
    // NOLINTEND
};
