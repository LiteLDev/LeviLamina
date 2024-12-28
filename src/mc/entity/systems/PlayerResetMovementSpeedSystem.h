#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct PlayerResetMovementSpeedSystem {
public:
    // prevent constructor by default
    PlayerResetMovementSpeedSystem& operator=(PlayerResetMovementSpeedSystem const&);
    PlayerResetMovementSpeedSystem(PlayerResetMovementSpeedSystem const&);
    PlayerResetMovementSpeedSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
