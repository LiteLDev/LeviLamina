#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPosTrackerSystem {

public:
    // prevent constructor by default
    BlockPosTrackerSystem& operator=(BlockPosTrackerSystem const&) = delete;
    BlockPosTrackerSystem(BlockPosTrackerSystem const&)            = delete;
    BlockPosTrackerSystem()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@BlockPosTrackerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
    /**
     * @symbol
     * ?_tickBlockPosTrackerComponent\@BlockPosTrackerSystem\@\@SAXAEAVActor\@\@AEAVBlockPosTrackerComponent\@\@\@Z
     */
    MCAPI static void _tickBlockPosTrackerComponent(class Actor&, class BlockPosTrackerComponent&); // NOLINT
};
