#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class HopperContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    HopperContainerManagerModel& operator=(HopperContainerManagerModel const&);
    HopperContainerManagerModel(HopperContainerManagerModel const&);
    HopperContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HopperContainerManagerModel@@UEAA@XZ
    virtual ~HopperContainerManagerModel() = default;

    // vIndex: 17, symbol: ?_postInit@HopperContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0HopperContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI HopperContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // symbol: ??0HopperContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBUActorUniqueID@@@Z
    MCAPI
    HopperContainerManagerModel(::ContainerID containerId, class Player& player, struct ActorUniqueID const& uniqueID);

    // NOLINTEND
};
