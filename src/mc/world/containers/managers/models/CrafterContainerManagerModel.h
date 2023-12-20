#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class CrafterContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    CrafterContainerManagerModel& operator=(CrafterContainerManagerModel const&);
    CrafterContainerManagerModel(CrafterContainerManagerModel const&);
    CrafterContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CrafterContainerManagerModel@@UEAA@XZ
    virtual ~CrafterContainerManagerModel() = default;

    // vIndex: 7, symbol: ?setSlot@CrafterContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
    virtual void setSlot(int, class ItemStack const&, bool);

    // vIndex: 17, symbol: ?_postInit@CrafterContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0CrafterContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI CrafterContainerManagerModel(::ContainerID, class Player&, class BlockPos const&);

    // NOLINTEND
};
