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
    // symbol: ?createSystem@MobOnPlayerJumpSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo createSystem(bool);

    // symbol: ?getPlayerJumpPendingScale@MobOnPlayerJumpSystem@@SAMH@Z
    MCAPI static float getPlayerJumpPendingScale(int jumpAmount);

    // NOLINTEND
};
