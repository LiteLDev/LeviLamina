#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/level/block/actor/PistonState.h"

class BlockEventListener {
public:
    // prevent constructor by default
    BlockEventListener& operator=(BlockEventListener const&);
    BlockEventListener(BlockEventListener const&);
    BlockEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onBlockPlacedByPlayer(
        class Player&         player,
        class Block const&    placedBlock,
        class BlockPos const& pos,
        bool                  isUnderwater
    );

    // vIndex: 2
    virtual ::EventResult
    onBlockDestroyedByPlayer(class Player& player, class Block const& destroyedBlock, class BlockPos const& pos, class ItemStackBase const&, class ItemStackBase const&);

    // vIndex: 3
    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(class Player& player, class BlockPos const& pos);

    // vIndex: 4
    virtual ::EventResult
    onBlockMovedByPiston(class BlockPos const& pistonPos, class BlockPos const& blockPos, ::PistonState action);

    // vIndex: 5
    virtual ::EventResult onBlockDestructionStopped(class Player& player, class BlockPos const& blockPos, int progress);

    // vIndex: 6
    virtual ::EventResult onBlockDestructionStarted(class Player&, class BlockPos const&, class Block const&, uchar);

    // vIndex: 7
    virtual ::EventResult onBlockInteractedWith(class Player& player, class BlockPos const& blockPos);

    // vIndex: 8
    virtual ::EventResult onBlockExploded(
        class Dimension&      dimension,
        class BlockPos const& blockPos,
        class Block const&    destroyedBlock,
        class Actor*          source
    );

    // vIndex: 9
    virtual ::EventResult
    onBlockModified(class BlockPos const& pos, class Block const& oldBlock, class Block const& newBlock);

    // vIndex: 10
    virtual ::EventResult onUnknownBlockReceived(class Level& level, struct NewBlockID const& blockId, ushort data);

    // vIndex: 11
    virtual ::EventResult onEvent(struct BlockNotificationEvent const&);

    // NOLINTEND
};
