#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobOnPlayerJumpSystem {
public:
    // prevent constructor by default
    MobOnPlayerJumpSystem& operator=(MobOnPlayerJumpSystem const&);
    MobOnPlayerJumpSystem(MobOnPlayerJumpSystem const&);
    MobOnPlayerJumpSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem(bool isClientSide);

    MCAPI static float getPlayerJumpPendingScale(int jumpAmount);

    // NOLINTEND
};
