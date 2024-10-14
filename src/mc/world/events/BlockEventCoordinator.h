#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"
#include "mc/world/level/block/actor/PistonState.h"

class BlockEventCoordinator {
public:
    // prevent constructor by default
    BlockEventCoordinator& operator=(BlockEventCoordinator const&);
    BlockEventCoordinator(BlockEventCoordinator const&);
    BlockEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventCoordinator() = default;

    MCAPI class BlockGameplayHandler& getBlockGameplayHandler();

    MCAPI void registerBlockGameplayHandler(std::unique_ptr<class BlockGameplayHandler>&& handler);

    MCAPI void sendBlockDestroyedByPlayer(
        class Player&              player,
        class Block const&         destroyedBlock,
        class BlockPos const&      pos,
        class ItemStackBase const& currentItem,
        class ItemStackBase const& itemBeforeBlockBreak
    );

    MCAPI void sendBlockDestructionStarted(
        class Player&         player,
        class BlockPos const& blockPos,
        class Block const&    hitBlock,
        uchar                 face
    );

    MCAPI void sendBlockDestructionStopped(class Player& player, class BlockPos const& blockPos, int progress);

    MCAPI void sendBlockExploded(
        class Dimension&      dimension,
        class BlockPos const& blockPos,
        class Block const&    destroyedBlock,
        class Actor*          source
    );

    MCAPI void sendBlockInPosWillBeDestroyedByPlayer(class Player& player, class BlockPos const& pos);

    MCAPI void sendBlockInteractedWith(class Player& player, class BlockPos const& blockPos);

    MCAPI void
    sendBlockMovedByPiston(class BlockPos const& pistonPos, class BlockPos const& blockPos, ::PistonState action);

    MCAPI void sendBlockPlacedByPlayer(
        class Player&         player,
        class Block const&    placedBlock,
        class BlockPos const& pos,
        bool                  isUnderwater
    );

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct BlockGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableBlockGameplayEvent<::CoordinatorResult>> event);

    MCAPI void sendEvent(class EventRef<struct BlockGameplayEvent<void>> const& event);

    MCAPI void sendUnknownBlockReceived(class Level& level, struct NewBlockID const& blockId, ushort data);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
