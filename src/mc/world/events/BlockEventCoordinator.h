#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"
#include "mc/world/level/block/actor/PistonState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockEventListener;
class BlockGameplayHandler;
class BlockPos;
class Dimension;
class ItemStackBase;
class Level;
class Player;
struct NewBlockID;
// clang-format on

class BlockEventCoordinator : public ::EventCoordinator<::BlockEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf525d0;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEventCoordinator& operator=(BlockEventCoordinator const&);
    BlockEventCoordinator(BlockEventCoordinator const&);
    BlockEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockGameplayHandler& getBlockGameplayHandler();

    MCAPI void registerBlockGameplayHandler(::std::unique_ptr<::BlockGameplayHandler>&& handler);

    MCAPI void sendBlockDestroyedByPlayer(
        ::Player&              player,
        ::Block const&         destroyedBlock,
        ::BlockPos const&      pos,
        ::ItemStackBase const& currentItem,
        ::ItemStackBase const& itemBeforeBlockBreak
    );

    MCAPI void
    sendBlockDestructionStarted(::Player& player, ::BlockPos const& blockPos, ::Block const& hitBlock, uchar face);

    MCAPI void sendBlockDestructionStopped(::Player& player, ::BlockPos const& blockPos, int progress);

    MCAPI void sendBlockExploded(
        ::Dimension&      dimension,
        ::BlockPos const& blockPos,
        ::Block const&    destroyedBlock,
        ::Actor*          source
    );

    MCAPI void sendBlockInPosWillBeDestroyedByPlayer(::Player& player, ::BlockPos const& pos);

    MCAPI void sendBlockInteractedWith(::Player& player, ::BlockPos const& blockPos);

    MCAPI void sendBlockMovedByPiston(::BlockPos const& pistonPos, ::BlockPos const& blockPos, ::PistonState action);

    MCAPI void
    sendBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableBlockGameplayEvent<::CoordinatorResult>> event);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::BlockGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI void sendEvent(::EventRef<::BlockGameplayEvent<void>> const& event);

    MCAPI void sendUnknownBlockReceived(::Level& level, ::NewBlockID const& blockId, ushort data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
