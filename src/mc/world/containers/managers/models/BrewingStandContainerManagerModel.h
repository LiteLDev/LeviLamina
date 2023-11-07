#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class BrewingStandContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    BrewingStandContainerManagerModel& operator=(BrewingStandContainerManagerModel const&);
    BrewingStandContainerManagerModel(BrewingStandContainerManagerModel const&);
    BrewingStandContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BrewingStandContainerManagerModel@@UEAA@XZ
    virtual ~BrewingStandContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@BrewingStandContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@BrewingStandContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const&, bool);

    // vIndex: 8, symbol: ?getSlot@BrewingStandContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int) const;

    // vIndex: 9, symbol: ?setData@BrewingStandContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int, int);

    // vIndex: 10, symbol: ?broadcastChanges@BrewingStandContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@BrewingStandContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@BrewingStandContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0BrewingStandContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI BrewingStandContainerManagerModel(::ContainerID, class Player&, class BlockPos const&);

    // NOLINTEND
};
