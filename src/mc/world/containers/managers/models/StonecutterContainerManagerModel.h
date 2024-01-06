#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class StonecutterContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    StonecutterContainerManagerModel& operator=(StonecutterContainerManagerModel const&);
    StonecutterContainerManagerModel(StonecutterContainerManagerModel const&);
    StonecutterContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StonecutterContainerManagerModel@@UEAA@XZ
    virtual ~StonecutterContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@StonecutterContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@StonecutterContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8, symbol: ?getSlot@StonecutterContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9, symbol: ?setData@StonecutterContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int id, int value);

    // vIndex: 10, symbol: ?broadcastChanges@StonecutterContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@StonecutterContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@StonecutterContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0StonecutterContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI
    StonecutterContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // NOLINTEND
};
