#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class FurnaceContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    FurnaceContainerManagerModel& operator=(FurnaceContainerManagerModel const&);
    FurnaceContainerManagerModel(FurnaceContainerManagerModel const&);
    FurnaceContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FurnaceContainerManagerModel@@UEAA@XZ
    virtual ~FurnaceContainerManagerModel();

    // vIndex: 6, symbol:
    // ?getItemCopies@FurnaceContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@FurnaceContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8, symbol: ?getSlot@FurnaceContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9, symbol: ?setData@FurnaceContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int id, int value);

    // vIndex: 10, symbol: ?broadcastChanges@FurnaceContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@FurnaceContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@FurnaceContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0FurnaceContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI FurnaceContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0FurnaceContainerManagerModel@@IEAA@AEBVHashedString@@W4ContainerType@@W4BlockActorType@@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI FurnaceContainerManagerModel(
        class HashedString const& recipeTag,
        ::ContainerType           containerType,
        ::BlockActorType          blockActorType,
        ::ContainerID             containerId,
        class Player&             player,
        class BlockPos const&     blockPos
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getFurnaceEntity@FurnaceContainerManagerModel@@AEAAPEAVFurnaceBlockActor@@XZ
    MCAPI class FurnaceBlockActor* _getFurnaceEntity();

    // symbol: ?_updateResultSlotInfo@FurnaceContainerManagerModel@@AEAAXXZ
    MCAPI void _updateResultSlotInfo();

    // NOLINTEND
};
