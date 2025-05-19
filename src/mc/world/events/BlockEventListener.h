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
    // BlockEventListener inner types define
    using EventType = ::BlockNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventListener() = default;

    // vIndex: 1
    virtual ::EventResult
    onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    // vIndex: 2
    virtual ::EventResult onBlockDestroyedByPlayer(
        ::Player&         player,
        ::Block const&    destroyedBlock,
        ::BlockPos const& pos,
        ::ItemStackBase const&,
        ::ItemStackBase const&
    );

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    MCNAPI ::EventResult $onBlockDestroyedByPlayer(
        ::Player&         player,
        ::Block const&    destroyedBlock,
        ::BlockPos const& pos,
        ::ItemStackBase const&,
        ::ItemStackBase const&
    );

    MCNAPI ::EventResult $onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos);

    MCNAPI ::EventResult
    $onBlockMovedByPiston(::BlockPos const& pistonPos, ::BlockPos const& blockPos, ::PistonState const action);

    MCNAPI ::EventResult $onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);

    MCNAPI ::EventResult $onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const);

    MCNAPI ::EventResult $onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);

    MCNAPI ::EventResult $onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );

    MCNAPI ::EventResult $onBlockModified(::BlockPos const& pos, ::Block const& oldBlock, ::Block const& newBlock);

    MCNAPI ::EventResult $onUnknownBlockReceived(::Level& level, ::NewBlockID const& blockId, ushort data);

    MCNAPI ::EventResult $onEvent(::BlockNotificationEvent const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
