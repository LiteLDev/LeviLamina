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
    // symbol: ?_getContainer@LevelContainerModel@@EEBAPEAVContainer@@XZ
    MCVAPI class Container* _getContainer() const;

    // symbol: ?_getContainerOffset@LevelContainerModel@@MEBAHXZ
    MCVAPI int _getContainerOffset() const;

    // symbol: ?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z
    MCVAPI void _onItemChanged(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    // symbol: ?containerContentChanged@LevelContainerModel@@UEAAXH@Z
    MCVAPI void containerContentChanged(int slot);

    // symbol: ?containerRemoved@LevelContainerModel@@UEAAXXZ
    MCVAPI void containerRemoved();

    // symbol: ?getContainerWeakRef@LevelContainerModel@@UEBA?AVContainerWeakRef@@XZ
    MCVAPI class ContainerWeakRef getContainerWeakRef() const;

    // symbol: ?isSlotDisabled@LevelContainerModel@@UEBA_NH@Z
    MCVAPI bool isSlotDisabled(int) const;

    // symbol: ?isValid@LevelContainerModel@@UEAA_NXZ
    MCVAPI bool isValid();

    // symbol: ?postInit@LevelContainerModel@@UEAAXXZ
    MCVAPI void postInit();

    // symbol: ?releaseResources@LevelContainerModel@@UEAAXXZ
    MCVAPI void releaseResources();

    // symbol: ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@UActorUniqueID@@W4ContainerCategory@@@Z
    MCAPI LevelContainerModel(
        ::ContainerEnumName  containerName,
        int                  containerSize,
        class Player&        player,
        struct ActorUniqueID entityId,
        ::ContainerCategory  category
    );

    // symbol:
    // ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@W4ContainerCategory@@@Z
    MCAPI LevelContainerModel(
        ::ContainerEnumName   containerName,
        int                   containerSize,
        class Player&         player,
        ::BlockActorType      type,
        class BlockPos const& blockPos,
        ::ContainerCategory   category
    );

    // symbol: ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@AEBUActorUniqueID@@@Z
    MCAPI static class Container* getContainerHelper(class Player& player, struct ActorUniqueID const& actorUniqueId);

    // symbol: ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@@Z
    MCAPI static class Container*
    getContainerHelper(class Player& player, ::BlockActorType blockActorType, class BlockPos const& blockPos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getEntity@LevelContainerModel@@AEBAPEAVActor@@XZ
    MCAPI class Actor* _getEntity() const;

    // symbol: ?_refreshSlot@LevelContainerModel@@AEAAXH@Z
    MCAPI void _refreshSlot(int modelSlot);

    // NOLINTEND
};
