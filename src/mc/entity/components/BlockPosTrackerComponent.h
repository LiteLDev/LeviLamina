#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPosTrackerComponent {

public:
    // prevent constructor by default
    BlockPosTrackerComponent& operator=(BlockPosTrackerComponent const&) = delete;
    BlockPosTrackerComponent(BlockPosTrackerComponent const&)            = delete;
    BlockPosTrackerComponent()                                           = delete;

public:
    /**
     * @symbol ??0BlockPosTrackerComponent\@\@QEAA\@_NAEBVBlockPos\@\@\@Z
     */
    MCAPI BlockPosTrackerComponent(bool, class BlockPos const&); // NOLINT
    /**
     * @symbol ?onRemove\@BlockPosTrackerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onRemove(class Actor&); // NOLINT
};
