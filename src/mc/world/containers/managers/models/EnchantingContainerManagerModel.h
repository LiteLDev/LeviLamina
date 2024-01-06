#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class EnchantingContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    EnchantingContainerManagerModel& operator=(EnchantingContainerManagerModel const&);
    EnchantingContainerManagerModel(EnchantingContainerManagerModel const&);
    EnchantingContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnchantingContainerManagerModel@@UEAA@XZ
    virtual ~EnchantingContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@EnchantingContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@EnchantingContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8, symbol: ?getSlot@EnchantingContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9, symbol: ?setData@EnchantingContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int id, int value);

    // vIndex: 10, symbol: ?broadcastChanges@EnchantingContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@EnchantingContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@EnchantingContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0EnchantingContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI
    EnchantingContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // symbol:
    // ?getEnchantOptions@EnchantingContainerManagerModel@@QEBAAEBV?$vector@VItemEnchantOption@@V?$allocator@VItemEnchantOption@@@std@@@std@@XZ
    MCAPI std::vector<class ItemEnchantOption> const& getEnchantOptions() const;

    // symbol: ?recalculateOptions@EnchantingContainerManagerModel@@QEAAXXZ
    MCAPI void recalculateOptions();

    // symbol: ?NUM_OPTIONS@EnchantingContainerManagerModel@@2HB
    MCAPI static int const NUM_OPTIONS;

    // NOLINTEND
};
