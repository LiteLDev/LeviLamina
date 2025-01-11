#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ServerPlayerMovementSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createClearPlayerActionComponentSystem();

    MCAPI static ::std::array<::TickingSystemWithInfo, 2> createPostTravelSystems();

    MCAPI static ::TickingSystemWithInfo createServerPlayerMovementFinalSystem();

    MCAPI static ::TickingSystemWithInfo createServerPlayerResetFallDistanceSystem();
    // NOLINTEND
};
