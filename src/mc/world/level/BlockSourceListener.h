#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

class BlockSource;
class BlockPos;
class Actor;
struct ActorBlockSyncMessage;

class BlockSourceListener {
public:
    // prevent constructor by default
    BlockSourceListener& operator=(BlockSourceListener const&);
    BlockSourceListener(BlockSourceListener const&);
    BlockSourceListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockSourceListener@@UEAA@XZ
    virtual ~BlockSourceListener();

    // vIndex: 1, symbol: ?onSourceCreated@BlockSourceListener@@UEAAXAEAVBlockSource@@@Z
    virtual void onSourceCreated(class BlockSource& source);

    // vIndex: 2, symbol: ?onSourceDestroyed@BlockSourceListener@@UEAAXAEAVBlockSource@@@Z
    virtual void onSourceDestroyed(class BlockSource& source);

    // vIndex: 3, symbol: ?onAreaChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void onAreaChanged(class BlockSource& source, class BlockPos const& min, class BlockPos const& max);

    // vIndex: 4, symbol:
    // ?onBlockChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    virtual void
    onBlockChanged(class BlockSource& source, class BlockPos const& pos, uint layer, class Block const& block, class Block const& oldBlock, int updateFlags, struct ActorBlockSyncMessage const* syncMsg, ::BlockChangedEventTarget, class Actor*);

    // vIndex: 5, symbol: ?onBrightnessChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onBrightnessChanged(class BlockSource& source, class BlockPos const& pos);

    // vIndex: 6, symbol: ?onBlockEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVBlockActor@@@Z
    virtual void onBlockEntityChanged(class BlockSource& source, class BlockActor& te);

    // vIndex: 7, symbol: ?onEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVActor@@@Z
    virtual void onEntityChanged(class BlockSource& source, class Actor& entity);

    // vIndex: 8, symbol: ?onBlockEvent@BlockSourceListener@@UEAAXAEAVBlockSource@@HHHHH@Z
    virtual void onBlockEvent(class BlockSource& source, int x, int y, int z, int b0, int b1);

    // NOLINTEND
};
