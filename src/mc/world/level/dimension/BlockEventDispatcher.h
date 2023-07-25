#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventDispatcher {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTDISPATCHER
public:
    BlockEventDispatcher& operator=(BlockEventDispatcher const&) = delete;
    BlockEventDispatcher(BlockEventDispatcher const&)            = delete;
    BlockEventDispatcher()                                       = delete;
#endif

public:
    /**
     * @symbol ?dispatchEvent\@BlockEventDispatcher\@\@QEAAXAEBVBlockPos\@\@IAEBVBlock\@\@1PEAVActor\@\@\@Z
     */
    MCAPI void dispatchEvent(class BlockPos const&, unsigned int, class Block const&, class Block const&, class Actor*);
    /**
     * @symbol
     * ?registerListener\@BlockEventDispatcher\@\@QEAA?AVBlockEventDispatcherToken\@\@AEBVVec3\@\@MV?$function\@$$A6AXAEBVBlockPos\@\@IAEBVBlock\@\@PEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class BlockEventDispatcherToken
    registerListener(class Vec3 const&, float, class std::function<void(class BlockPos const&, unsigned int, class Block const&, class Actor*)>);
    /**
     * @symbol ?updatePosition\@BlockEventDispatcher\@\@QEAAXHAEBVVec3\@\@\@Z
     */
    MCAPI void updatePosition(int, class Vec3 const&);
};
