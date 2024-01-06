#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class HudContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    HudContainerManagerModel& operator=(HudContainerManagerModel const&);
    HudContainerManagerModel(HudContainerManagerModel const&);
    HudContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HudContainerManagerModel@@UEAA@XZ
    virtual ~HudContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@HudContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@HudContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool);

    // vIndex: 8, symbol: ?getSlot@HudContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9, symbol: ?setData@HudContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int id, int value);

    // vIndex: 10, symbol: ?broadcastChanges@HudContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 17, symbol: ?_postInit@HudContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0HudContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@@Z
    MCAPI HudContainerManagerModel(::ContainerID containerId, class Player& player);

    // NOLINTEND
};
