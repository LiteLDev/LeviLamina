#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class MaterialReducerContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    MaterialReducerContainerManagerModel& operator=(MaterialReducerContainerManagerModel const&);
    MaterialReducerContainerManagerModel(MaterialReducerContainerManagerModel const&);
    MaterialReducerContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MaterialReducerContainerManagerModel@@UEAA@XZ
    virtual ~MaterialReducerContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@MaterialReducerContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@MaterialReducerContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const&, bool);

    // vIndex: 8, symbol: ?getSlot@MaterialReducerContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int) const;

    // vIndex: 9, symbol: ?setData@MaterialReducerContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int, int);

    // vIndex: 10, symbol: ?broadcastChanges@MaterialReducerContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@MaterialReducerContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@MaterialReducerContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0MaterialReducerContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI MaterialReducerContainerManagerModel(::ContainerID, class Player&, class BlockPos const&);

    // NOLINTEND
};
