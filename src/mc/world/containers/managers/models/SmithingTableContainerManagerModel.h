#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class SmithingTableContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    SmithingTableContainerManagerModel& operator=(SmithingTableContainerManagerModel const&);
    SmithingTableContainerManagerModel(SmithingTableContainerManagerModel const&);
    SmithingTableContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SmithingTableContainerManagerModel@@UEAA@XZ
    virtual ~SmithingTableContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@SmithingTableContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@SmithingTableContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8, symbol: ?getSlot@SmithingTableContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9, symbol: ?setData@SmithingTableContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int, int);

    // vIndex: 10, symbol: ?broadcastChanges@SmithingTableContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@SmithingTableContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@SmithingTableContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0SmithingTableContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI
    SmithingTableContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // symbol: ?INPUT_SLOT@SmithingTableContainerManagerModel@@2HB
    MCAPI static int const INPUT_SLOT;

    // symbol: ?MATERIAL_SLOT@SmithingTableContainerManagerModel@@2HB
    MCAPI static int const MATERIAL_SLOT;

    // symbol: ?RESULT_SLOT@SmithingTableContainerManagerModel@@2HB
    MCAPI static int const RESULT_SLOT;

    // symbol: ?TEMPLATE_SLOT@SmithingTableContainerManagerModel@@2HB
    MCAPI static int const TEMPLATE_SLOT;

    // NOLINTEND
};
