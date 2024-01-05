#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PistonState.h"
#include "mc/world/events/EventResult.h"

class BlockEventListener {
public:
    // prevent constructor by default
    BlockEventListener& operator=(BlockEventListener const&);
    BlockEventListener(BlockEventListener const&);
    BlockEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockEventListener@@UEAA@XZ
    virtual ~BlockEventListener() = default;

    // vIndex: 1, symbol:
    // ?onBlockPlacedByPlayer@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
    virtual ::EventResult onBlockPlacedByPlayer(
        class Player&         player,
        class Block const&    placedBlock,
        class BlockPos const& pos,
        bool                  isUnderwater
    );

    // vIndex: 2, symbol:
    // ?onBlockDestroyedByPlayer@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@AEBVItemStackBase@@3@Z
    virtual ::EventResult
    onBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&, class ItemStackBase const&, class ItemStackBase const&);

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
    virtual ::EventResult onBlockExploded(
        class Dimension&      dimension,
        class BlockPos const& blockPos,
        class Block const&    destroyedBlock,
        class Actor*          source
    );

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: ?onEvent@BlockEventListener@@UEAA?AW4EventResult@@AEBUBlockNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct BlockNotificationEvent const&);

    // symbol: ?onBlockDestructionStopped@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@H@Z
    MCVAPI ::EventResult onBlockDestructionStopped(class Player& player, class BlockPos const& blockPos, int progress);

    // symbol:
    // ?onBlockInPosWillBeDestroyedByPlayer@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCVAPI ::EventResult onBlockInPosWillBeDestroyedByPlayer(class Player& player, class BlockPos const& pos);

    // symbol: ?onBlockInteractedWith@BlockEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCVAPI ::EventResult onBlockInteractedWith(class Player& player, class BlockPos const& blockPos);

    // symbol: ?onBlockModified@BlockEventListener@@UEAA?AW4EventResult@@AEBVBlockPos@@AEBVBlock@@1@Z
    MCVAPI ::EventResult
    onBlockModified(class BlockPos const& pos, class Block const& oldBlock, class Block const& newBlock);

    // symbol: ?onBlockMovedByPiston@BlockEventListener@@UEAA?AW4EventResult@@AEBVBlockPos@@0W4PistonState@@@Z
    MCVAPI ::EventResult
    onBlockMovedByPiston(class BlockPos const& pistonPos, class BlockPos const& blockPos, ::PistonState action);

    // symbol: ?onUnknownBlockReceived@BlockEventListener@@UEAA?AW4EventResult@@AEAVLevel@@AEBUNewBlockID@@G@Z
    MCVAPI ::EventResult onUnknownBlockReceived(class Level& level, struct NewBlockID const& blockId, ushort data);

    // NOLINTEND
};
