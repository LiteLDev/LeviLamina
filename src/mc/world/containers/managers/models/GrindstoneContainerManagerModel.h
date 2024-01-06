#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class GrindstoneContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    GrindstoneContainerManagerModel& operator=(GrindstoneContainerManagerModel const&);
    GrindstoneContainerManagerModel(GrindstoneContainerManagerModel const&);
    GrindstoneContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GrindstoneContainerManagerModel@@UEAA@XZ
    virtual ~GrindstoneContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@GrindstoneContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@GrindstoneContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8, symbol: ?getSlot@GrindstoneContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9, symbol: ?setData@GrindstoneContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int id, int value);

    // vIndex: 10, symbol: ?broadcastChanges@GrindstoneContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@GrindstoneContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@GrindstoneContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0GrindstoneContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI
    GrindstoneContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // symbol: ?ADDITIONAL_SLOT@GrindstoneContainerManagerModel@@2HB
    MCAPI static int const ADDITIONAL_SLOT;

    // symbol: ?INPUT_SLOT@GrindstoneContainerManagerModel@@2HB
    MCAPI static int const INPUT_SLOT;

    // symbol: ?RESULT_SLOT@GrindstoneContainerManagerModel@@2HB
    MCAPI static int const RESULT_SLOT;

    // NOLINTEND
};
