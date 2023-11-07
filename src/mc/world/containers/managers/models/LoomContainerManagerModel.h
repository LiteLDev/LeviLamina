#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class LoomContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    LoomContainerManagerModel& operator=(LoomContainerManagerModel const&);
    LoomContainerManagerModel(LoomContainerManagerModel const&);
    LoomContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LoomContainerManagerModel() = default;

    // vIndex: 6, symbol:
    // ?getItemCopies@LoomContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7, symbol: ?setSlot@LoomContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const&, bool);

    // vIndex: 8, symbol: ?getSlot@LoomContainerManagerModel@@UEBAAEBVItemStack@@H@Z
    virtual class ItemStack const& getSlot(int) const;

    // vIndex: 9, symbol: ?setData@LoomContainerManagerModel@@UEAAXHH@Z
    virtual void setData(int, int);

    // vIndex: 10, symbol: ?broadcastChanges@LoomContainerManagerModel@@UEAAXXZ
    virtual void broadcastChanges();

    // vIndex: 16, symbol: ?isValid@LoomContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@LoomContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0LoomContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI LoomContainerManagerModel(::ContainerID, class Player&, class BlockPos const&);

    // symbol: ?BANNER_SLOT@LoomContainerManagerModel@@2HB
    MCAPI static int const BANNER_SLOT;

    // symbol: ?DYE_SLOT@LoomContainerManagerModel@@2HB
    MCAPI static int const DYE_SLOT;

    // symbol: ?MATERIAL_SLOT@LoomContainerManagerModel@@2HB
    MCAPI static int const MATERIAL_SLOT;

    // symbol: ?RESULT_SLOT@LoomContainerManagerModel@@2HB
    MCAPI static int const RESULT_SLOT;

    // NOLINTEND
};
