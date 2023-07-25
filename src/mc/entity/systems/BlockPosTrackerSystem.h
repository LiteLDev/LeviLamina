#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPosTrackerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSTRACKERSYSTEM
public:
    BlockPosTrackerSystem& operator=(BlockPosTrackerSystem const&) = delete;
    BlockPosTrackerSystem(BlockPosTrackerSystem const&)            = delete;
    BlockPosTrackerSystem()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@BlockPosTrackerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol
     * ?_tickBlockPosTrackerComponent\@BlockPosTrackerSystem\@\@SAXAEAVActor\@\@AEAVBlockPosTrackerComponent\@\@\@Z
     */
    MCAPI static void _tickBlockPosTrackerComponent(class Actor&, class BlockPosTrackerComponent&);
};
