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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?onSourceDestroyed@BlockSourceListener@@UEAAXAEAVBlockSource@@@Z
    virtual void onSourceDestroyed(class BlockSource&);

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?onBrightnessChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onBrightnessChanged(class BlockSource&, class BlockPos const&);

    // symbol: ?onAreaChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCVAPI void onAreaChanged(class BlockSource&, class BlockPos const&, class BlockPos const&);

    // symbol:
    // ?onBlockChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    MCVAPI void
    onBlockChanged(class BlockSource&, class BlockPos const&, uint, class Block const&, class Block const&, int, struct ActorBlockSyncMessage const*, ::BlockChangedEventTarget, class Actor*);

    // symbol: ?onBlockEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVBlockActor@@@Z
    MCVAPI void onBlockEntityChanged(class BlockSource&, class BlockActor&);

    // symbol: ?onBlockEvent@BlockSourceListener@@UEAAXAEAVBlockSource@@HHHHH@Z
    MCVAPI void onBlockEvent(class BlockSource&, int, int, int, int, int);

    // symbol: ?onEntityChanged@BlockSourceListener@@UEAAXAEAVBlockSource@@AEAVActor@@@Z
    MCVAPI void onEntityChanged(class BlockSource&, class Actor&);

    // symbol: ?onSourceCreated@BlockSourceListener@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onSourceCreated(class BlockSource&);

    // symbol: ??1BlockSourceListener@@UEAA@XZ
    MCVAPI ~BlockSourceListener();

    // NOLINTEND
};
