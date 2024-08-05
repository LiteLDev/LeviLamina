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
    // vIndex: 0
    virtual ~HopperContainerManagerModel() = default;

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI HopperContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    MCAPI
    HopperContainerManagerModel(::ContainerID containerId, class Player& player, struct ActorUniqueID const& uniqueID);

    // NOLINTEND
};
