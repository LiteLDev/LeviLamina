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
    // vIndex: 0, symbol: __gen_??1ChestContainerManagerModel@@UEAA@XZ
    virtual ~ChestContainerManagerModel() = default;

    // vIndex: 16, symbol: ?isValid@ChestContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@ChestContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@UActorUniqueID@@@Z
    MCAPI ChestContainerManagerModel(::ContainerID containerId, class Player& player, struct ActorUniqueID uniqueID);

    // symbol: ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@W4BlockActorType@@@Z
    MCAPI ChestContainerManagerModel(
        ::ContainerID         containerId,
        class Player&         player,
        class BlockPos const& blockPos,
        ::BlockActorType      blockActorType
    );

    // NOLINTEND
};
