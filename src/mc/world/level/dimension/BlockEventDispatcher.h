#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventDispatcher {
public:
    // prevent constructor by default
    BlockEventDispatcher& operator=(BlockEventDispatcher const&);
    BlockEventDispatcher(BlockEventDispatcher const&);
    BlockEventDispatcher();

public:
    // NOLINTBEGIN
    // symbol: ?dispatchEvent@BlockEventDispatcher@@QEAAXAEBVBlockPos@@IAEBVBlock@@1PEAVActor@@@Z
    MCAPI void dispatchEvent(
        class BlockPos const& pos,
        uint                  layer,
        class Block const&    block,
        class Block const&    oldBlock,
        class Actor*          source
    );

    // symbol:
    // ?registerListener@BlockEventDispatcher@@QEAA?AVBlockEventDispatcherToken@@AEBVVec3@@MV?$function@$$A6AXAEBVBlockPos@@IAEBVBlock@@PEAVActor@@@Z@std@@@Z
    MCAPI class BlockEventDispatcherToken registerListener(
        class Vec3 const&                                                                  shapePos,
        float                                                                              shapeRadius,
        std::function<void(class BlockPos const&, uint, class Block const&, class Actor*)> callback
    );

    // symbol: ?updatePosition@BlockEventDispatcher@@QEAAXHAEBVVec3@@@Z
    MCAPI void updatePosition(int handle, class Vec3 const& newPosition);

    // NOLINTEND
};
