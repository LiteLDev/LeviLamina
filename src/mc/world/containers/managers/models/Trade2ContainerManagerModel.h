#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class Trade2ContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    Trade2ContainerManagerModel& operator=(Trade2ContainerManagerModel const&);
    Trade2ContainerManagerModel(Trade2ContainerManagerModel const&);
    Trade2ContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Trade2ContainerManagerModel@@UEAA@XZ
    virtual ~Trade2ContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@Trade2ContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@Trade2ContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int slot, class ItemStack const& item, bool);

    // vIndex: 8, symbol: ?getSlot@Trade2ContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 10, symbol: ?broadcastChanges@Trade2ContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@Trade2ContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@Trade2ContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0Trade2ContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBUActorUniqueID@@@Z
    MCAPI
    Trade2ContainerManagerModel(::ContainerID containerId, class Player& player, struct ActorUniqueID const& uniqueId);

    // NOLINTEND
};
