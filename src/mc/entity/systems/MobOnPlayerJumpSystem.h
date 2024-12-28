#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct MobOnPlayerJumpSystem {
public:
    // prevent constructor by default
    MobOnPlayerJumpSystem& operator=(MobOnPlayerJumpSystem const&);
    MobOnPlayerJumpSystem(MobOnPlayerJumpSystem const&);
    MobOnPlayerJumpSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);

    MCAPI static float getPlayerJumpPendingScale(int jumpAmount);
    // NOLINTEND
};
