#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/Hopper.h"
#include "mc/world/level/BlockPos.h"

class HopperComponent : public Hopper {
public:
    class BlockPos mLastPosition;

public:
    // NOLINTBEGIN
    MCAPI HopperComponent();

    MCAPI class BlockPos getLastPosition() const;

    MCAPI bool pullInItems(class Actor& owner);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
