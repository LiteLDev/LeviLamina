#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/ListenerInfo.h"

class BlockEventDispatcher {

public:
    // prevent constructor by default
    BlockEventDispatcher& operator=(BlockEventDispatcher const&) = delete;
    BlockEventDispatcher(BlockEventDispatcher const&)            = delete;
    BlockEventDispatcher()                                       = delete;

    std::unordered_map<int, std::unique_ptr<class ListenerInfo>> mRegisteredListeners;
    int                                                          mHandleCounter;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?dispatchEvent\@BlockEventDispatcher\@\@QEAAXAEBVBlockPos\@\@IAEBVBlock\@\@1PEAVActor\@\@\@Z
     */
    MCAPI void dispatchEvent(class BlockPos const&, unsigned int, class Block const&, class Block const&, class Actor*);
    /**
     * @symbol
     * ?registerListener\@BlockEventDispatcher\@\@QEAA?AVBlockEventDispatcherToken\@\@AEBVVec3\@\@MV?$function\@$$A6AXAEBVBlockPos\@\@IAEBVBlock\@\@PEAVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class BlockEventDispatcherToken
    registerListener(class Vec3 const&, float, std::function<void(class BlockPos const&, unsigned int, class Block const&, class Actor*)>);
    /**
     * @symbol ?updatePosition\@BlockEventDispatcher\@\@QEAAXHAEBVVec3\@\@\@Z
     */
    MCAPI void updatePosition(int, class Vec3 const&);
    // NOLINTEND
};
