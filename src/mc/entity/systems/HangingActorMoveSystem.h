#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class HangingActorMoveSystem {
public:
    // prevent constructor by default
    HangingActorMoveSystem& operator=(HangingActorMoveSystem const&);
    HangingActorMoveSystem(HangingActorMoveSystem const&);
    HangingActorMoveSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::TickingSystemWithInfo> createSystems();
    // NOLINTEND
};
