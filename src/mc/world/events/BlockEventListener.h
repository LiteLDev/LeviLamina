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
#ifdef LL_PLAT_S
    virtual ~BlockEventListener() = default;
#else // LL_PLAT_C
    virtual ~BlockEventListener();
#endif

    virtual ::EventResult
    onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    virtual ::EventResult onBlockDestroyedByPlayer(
        ::Player&         player,
        ::Block const&    destroyedBlock,
        ::BlockPos const& pos,
        ::ItemStackBase const&,
        ::ItemStackBase const&
    );

    virtual ::EventResult onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos);

    virtual ::EventResult
    onBlockMovedByPiston(::BlockPos const& pistonPos, ::BlockPos const& blockPos, ::PistonState const action);

    virtual ::EventResult onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);

    virtual ::EventResult onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const);

    virtual ::EventResult onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);

    virtual ::EventResult
    onBlockExploded(::Dimension& dimension, ::BlockPos const& blockPos, ::Block const& destroyedBlock, ::Actor* source);

    virtual ::EventResult onBlockModified(::BlockPos const& pos, ::Block const& oldBlock, ::Block const& newBlock);

    virtual ::EventResult onUnknownBlockReceived(::Level& level, ::NewBlockID const& blockId, ushort data);

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
    MCFOLD ::EventResult
    $onBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    MCFOLD ::EventResult $onBlockDestroyedByPlayer(
        ::Player&         player,
        ::Block const&    destroyedBlock,
        ::BlockPos const& pos,
        ::ItemStackBase const&,
        ::ItemStackBase const&
    );

    MCFOLD ::EventResult $onBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos);

    MCFOLD ::EventResult
    $onBlockMovedByPiston(::BlockPos const& pistonPos, ::BlockPos const& blockPos, ::PistonState const action);

    MCFOLD ::EventResult $onBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);

    MCFOLD ::EventResult $onBlockDestructionStarted(::Player&, ::BlockPos const&, ::Block const&, uchar const);

    MCFOLD ::EventResult $onBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);

    MCFOLD ::EventResult $onBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );

    MCFOLD ::EventResult $onBlockModified(::BlockPos const& pos, ::Block const& oldBlock, ::Block const& newBlock);

    MCFOLD ::EventResult $onUnknownBlockReceived(::Level& level, ::NewBlockID const& blockId, ushort data);

    MCFOLD ::EventResult $onEvent(::BlockNotificationEvent const& event);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
