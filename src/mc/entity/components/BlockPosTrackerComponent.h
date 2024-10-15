#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPosTrackerComponent {
public:
    // prevent constructor by default
    BlockPosTrackerComponent& operator=(BlockPosTrackerComponent const&);
    BlockPosTrackerComponent(BlockPosTrackerComponent const&);
    BlockPosTrackerComponent();

public:
    // NOLINTBEGIN
    MCAPI BlockPosTrackerComponent(bool onGround, class BlockPos const& pos);

    MCAPI void onRemove(class Actor& owner);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(bool onGround, class BlockPos const& pos);

    // NOLINTEND
};
