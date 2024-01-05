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
    // symbol: ??0BlockPosTrackerComponent@@QEAA@_NAEBVBlockPos@@@Z
    MCAPI BlockPosTrackerComponent(bool onGround, class BlockPos const& pos);

    // symbol: ?onRemove@BlockPosTrackerComponent@@QEAAXAEAVActor@@@Z
    MCAPI void onRemove(class Actor& owner);

    // NOLINTEND
};
