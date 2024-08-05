#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerCategory.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class LevelContainerModel {
public:
    // prevent constructor by default
    LevelContainerModel& operator=(LevelContainerModel const&);
    LevelContainerModel(LevelContainerModel const&);
    LevelContainerModel();

public:
    // NOLINTBEGIN
    MCVAPI class Container* _getContainer() const;

    MCVAPI int _getContainerOffset() const;

    MCVAPI void _onItemChanged(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    MCVAPI void containerContentChanged(int slot);

    MCVAPI void containerRemoved();

    MCVAPI class ContainerWeakRef getContainerWeakRef() const;

    MCVAPI bool isSlotDisabled(int) const;

    MCVAPI bool isValid();

    MCVAPI void postInit();

    MCVAPI void releaseResources();

    MCAPI LevelContainerModel(
        ::ContainerEnumName  containerName,
        int                  containerSize,
        class Player&        player,
        struct ActorUniqueID entityId,
        ::ContainerCategory  category
    );

    MCAPI LevelContainerModel(
        ::ContainerEnumName   containerName,
        int                   containerSize,
        class Player&         player,
        ::BlockActorType      type,
        class BlockPos const& blockPos,
        ::ContainerCategory   category
    );

    MCAPI static class Container* getContainerHelper(class Player& player, struct ActorUniqueID const& actorUniqueId);

    MCAPI static class Container*
    getContainerHelper(class Player& player, ::BlockActorType blockActorType, class BlockPos const& blockPos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Actor* _getEntity() const;

    MCAPI void _refreshSlot(int modelSlot);

    // NOLINTEND
};
