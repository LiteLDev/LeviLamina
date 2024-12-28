#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/level/block/actor/PistonState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Dimension;
class ItemStackBase;
class Level;
class Player;
struct BlockNotificationEvent;
struct NewBlockID;
// clang-format on

class BlockEventListener {
public:
    // prevent constructor by default
    BlockEventListener& operator=(BlockEventListener const&);
    BlockEventListener(BlockEventListener const&);
    BlockEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventListener();

    // vIndex: 1
    virtual ::EventResult
    onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    // vIndex: 2
    virtual ::EventResult
    onBlockDestroyedByPlayer(::Player& player, ::Block const& destroyedBlock, ::BlockPos const& pos, ::ItemStackBase const&, ::ItemStackBase const&);

    // vIndex: 3
    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos);

    // vIndex: 4
    virtual ::EventResult
    onBlockMovedByPiston(::BlockPos const& pistonPos, ::BlockPos const& blockPos, ::PistonState const action);

    // vIndex: 5
    virtual ::EventResult onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);

    // vIndex: 6
    virtual ::EventResult onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const);

    // vIndex: 7
    virtual ::EventResult onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);

    // vIndex: 8
    virtual ::EventResult
    onBlockExploded(::Dimension& dimension, ::BlockPos const& blockPos, ::Block const& destroyedBlock, ::Actor* source);

    // vIndex: 9
    virtual ::EventResult onBlockModified(::BlockPos const& pos, ::Block const& oldBlock, ::Block const& newBlock);

    // vIndex: 10
    virtual ::EventResult onUnknownBlockReceived(::Level& level, ::NewBlockID const& blockId, ushort data);

    // vIndex: 11
    virtual ::EventResult onEvent(::BlockNotificationEvent const& event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    MCAPI ::EventResult
    $onBlockDestroyedByPlayer(::Player& player, ::Block const& destroyedBlock, ::BlockPos const& pos, ::ItemStackBase const&, ::ItemStackBase const&);

    MCAPI ::EventResult $onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos);

    MCAPI ::EventResult
    $onBlockMovedByPiston(::BlockPos const& pistonPos, ::BlockPos const& blockPos, ::PistonState const action);

    MCAPI ::EventResult $onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);

    MCAPI ::EventResult $onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const);

    MCAPI ::EventResult $onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);

    MCAPI ::EventResult $onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );

    MCAPI ::EventResult $onBlockModified(::BlockPos const& pos, ::Block const& oldBlock, ::Block const& newBlock);

    MCAPI ::EventResult $onUnknownBlockReceived(::Level& level, ::NewBlockID const& blockId, ushort data);

    MCAPI ::EventResult $onEvent(::BlockNotificationEvent const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
