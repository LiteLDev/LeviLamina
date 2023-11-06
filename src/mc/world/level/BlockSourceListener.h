#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

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
    virtual void onSourceCreated(class BlockSource&);

    // vIndex: 2, symbol: ?onSourceDestroyed@BlockSourceListener@@UEAAXAEAVBlockSource@@@Z
    virtual void onSourceDestroyed(class BlockSource&);

    // vIndex: 3, symbol: ?onAreaChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void onAreaChanged(class BlockSource&, class BlockPos const&, class BlockPos const&);

    // vIndex: 4, symbol:
    // ?onBlockChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    virtual void
    onBlockChanged(class BlockSource&, class BlockPos const&, uint, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, ::BlockChangedEventTarget, class Actor*);

    // vIndex: 5, symbol: ?onBrightnessChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onBrightnessChanged(class BlockSource&, class BlockPos const&);

    // vIndex: 6, symbol: ?onBlockEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVBlockActor@@@Z
    virtual void onBlockEntityChanged(class BlockSource&, class BlockActor&);

    // vIndex: 7, symbol: ?onEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVActor@@@Z
    virtual void onEntityChanged(class BlockSource&, class Actor&);

    // NOLINTEND
};
