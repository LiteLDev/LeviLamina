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
    MCAPI BlockPosTrackerComponent(bool, class BlockPos const&);

    // symbol: ?onRemove@BlockPosTrackerComponent@@QEAAXAEAVActor@@@Z
    MCAPI void onRemove(class Actor&);

    // NOLINTEND
};
