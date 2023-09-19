#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class AnvilContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    AnvilContainerManagerModel& operator=(AnvilContainerManagerModel const&);
    AnvilContainerManagerModel(AnvilContainerManagerModel const&);
    AnvilContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol:
    // ?getItemCopies@AnvilContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@AnvilContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const&, bool);

    // vIndex: 8, symbol: ?getSlot@AnvilContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int) const;

    // vIndex: 9, symbol: ?setData@AnvilContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int, int);

    // vIndex: 10, symbol: ?broadcastChanges@AnvilContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@AnvilContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@AnvilContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0AnvilContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI AnvilContainerManagerModel(::ContainerID, class Player&, class BlockPos const&);

    // symbol: ?INPUT_SLOT@AnvilContainerManagerModel@@2HB
    MCAPI static int const INPUT_SLOT;

    // symbol: ?MATERIAL_SLOT@AnvilContainerManagerModel@@2HB
    MCAPI static int const MATERIAL_SLOT;

    // symbol: ?RESULT_SLOT@AnvilContainerManagerModel@@2HB
    MCAPI static int const RESULT_SLOT;

    // NOLINTEND
};
