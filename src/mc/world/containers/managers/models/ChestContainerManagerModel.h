#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class ChestContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    ChestContainerManagerModel& operator=(ChestContainerManagerModel const&);
    ChestContainerManagerModel(ChestContainerManagerModel const&);
    ChestContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 16, symbol: ?isValid@ChestContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float);

    // vIndex: 17, symbol: ?_postInit@ChestContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@W4BlockActorType@@@Z
    MCAPI ChestContainerManagerModel(::ContainerID, class Player&, class BlockPos const&, ::BlockActorType);

    // symbol: ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@UActorUniqueID@@@Z
    MCAPI ChestContainerManagerModel(::ContainerID, class Player&, struct ActorUniqueID);

    // NOLINTEND
};
