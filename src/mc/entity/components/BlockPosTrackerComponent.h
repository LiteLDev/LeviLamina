#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPosTrackerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSTRACKERCOMPONENT
public:
    BlockPosTrackerComponent& operator=(BlockPosTrackerComponent const&) = delete;
    BlockPosTrackerComponent(BlockPosTrackerComponent const&)            = delete;
    BlockPosTrackerComponent()                                           = delete;
#endif

public:
    /**
     * @symbol ??0BlockPosTrackerComponent\@\@QEAA\@_NAEBVBlockPos\@\@\@Z
     */
    MCAPI BlockPosTrackerComponent(bool, class BlockPos const&);
    /**
     * @symbol ?onRemove\@BlockPosTrackerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onRemove(class Actor&);
};
