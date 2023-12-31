#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class DropperContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    DropperContainerManagerModel& operator=(DropperContainerManagerModel const&);
    DropperContainerManagerModel(DropperContainerManagerModel const&);
    DropperContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DropperContainerManagerModel@@UEAA@XZ
    virtual ~DropperContainerManagerModel() = default;

    // vIndex: 17, symbol: ?_postInit@DropperContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0DropperContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI DropperContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // NOLINTEND
};
