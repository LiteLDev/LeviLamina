#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PistonState.h"
#include "mc/world/events/EventResult.h"

class BlockEventListener {
public:
    // prevent constructor by default
    BlockEventListener& operator=(BlockEventListener const&) = delete;
    BlockEventListener(BlockEventListener const&)            = delete;
    BlockEventListener()                                     = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?onBlockPlacedByPlayer@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
    virtual ::EventResult onBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool);

    // vIndex: 2, symbol:
    // ?onBlockDestroyedByPlayer@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@@Z
    virtual ::EventResult onBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&);

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol:
    // ?onBlockDestructionStarted@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@E@Z
    virtual ::EventResult onBlockDestructionStarted(class Player&, class BlockPos const&, uchar);

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol:
    // ?onBlockExploded@BlockEventListener@@UEAA?AW4EventResult@@AEAVDimension@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
    virtual ::EventResult onBlockExploded(class Dimension&, class BlockPos const&, class Block const&, class Actor*);

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: ?onEvent@BlockEventListener@@UEAA?AW4EventResult@@AEBUBlockNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct BlockNotificationEvent const&);

    // symbol: ?onBlockDestructionStopped@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@H@Z
    MCVAPI ::EventResult onBlockDestructionStopped(class Player&, class BlockPos const&, int);

    // symbol:
    // ?onBlockInPosWillBeDestroyedByPlayer@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCVAPI ::EventResult onBlockInPosWillBeDestroyedByPlayer(class Player&, class BlockPos const&);

    // symbol: ?onBlockInteractedWith@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCVAPI ::EventResult onBlockInteractedWith(class Player&, class BlockPos const&);

    // symbol: ?onBlockModified@BlockEventListener@@UEAA?AW4EventResult@@AEBVBlockPos@@AEBVBlock@@1@Z
    MCVAPI ::EventResult onBlockModified(class BlockPos const&, class Block const&, class Block const&);

    // symbol: ?onBlockMovedByPiston@BlockEventListener@@UEAA?AW4EventResult@@AEBVBlockPos@@0W4PistonState@@@Z
    MCVAPI ::EventResult onBlockMovedByPiston(class BlockPos const&, class BlockPos const&, ::PistonState);

    // symbol: ?onUnknownBlockReceived@BlockEventListener@@UEAA?AW4EventResult@@AEAVLevel@@AEBUNewBlockID@@G@Z
    MCVAPI ::EventResult onUnknownBlockReceived(class Level&, struct NewBlockID const&, ushort);

    // NOLINTEND
};
