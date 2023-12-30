#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/level/BlockPos.h"

class HopperComponent : public Hopper {
public:
    class BlockPos mLastPosition;

public:
    // NOLINTBEGIN
    // symbol: ??0HopperComponent@@QEAA@XZ
    MCAPI HopperComponent();

    // symbol: ?getLastPosition@HopperComponent@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getLastPosition() const;

    // symbol: ?pullInItems@HopperComponent@@QEAA_NAEAVActor@@@Z
    MCAPI bool pullInItems(class Actor& owner);

    // NOLINTEND
};
