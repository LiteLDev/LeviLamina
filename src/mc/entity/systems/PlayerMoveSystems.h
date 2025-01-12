#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct PlayerMoveSystems {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createLocalPlayerFilterAutoJumpSystem();

    MCAPI static ::TickingSystemWithInfo createPlayerPostMoveSystem();

    MCAPI static ::TickingSystemWithInfo createPlayerPreMoveSystem();
    // NOLINTEND
};
