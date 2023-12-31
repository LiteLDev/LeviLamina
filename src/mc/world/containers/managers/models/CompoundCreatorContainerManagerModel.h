#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class CompoundCreatorContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    CompoundCreatorContainerManagerModel& operator=(CompoundCreatorContainerManagerModel const&);
    CompoundCreatorContainerManagerModel(CompoundCreatorContainerManagerModel const&);
    CompoundCreatorContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CompoundCreatorContainerManagerModel@@UEAA@XZ
    virtual ~CompoundCreatorContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@CompoundCreatorContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@CompoundCreatorContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8, symbol: ?getSlot@CompoundCreatorContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9, symbol: ?setData@CompoundCreatorContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int id, int value);

    // vIndex: 10, symbol: ?broadcastChanges@CompoundCreatorContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@CompoundCreatorContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@CompoundCreatorContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0CompoundCreatorContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI CompoundCreatorContainerManagerModel(
        ::ContainerID         containerId,
        class Player&         player,
        class BlockPos const& blockPos
    );

    // NOLINTEND
};
