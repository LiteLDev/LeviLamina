#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"

class SmokerContainerManagerModel : public ::FurnaceContainerManagerModel {
public:
    // prevent constructor by default
    SmokerContainerManagerModel& operator=(SmokerContainerManagerModel const&);
    SmokerContainerManagerModel(SmokerContainerManagerModel const&);
    SmokerContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SmokerContainerManagerModel();

    // symbol: ??0SmokerContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI SmokerContainerManagerModel(::ContainerID, class Player&, class BlockPos const&);

    // NOLINTEND
};
