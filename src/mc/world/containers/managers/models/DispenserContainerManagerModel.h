#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class DispenserContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    DispenserContainerManagerModel& operator=(DispenserContainerManagerModel const&);
    DispenserContainerManagerModel(DispenserContainerManagerModel const&);
    DispenserContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DispenserContainerManagerModel() = default;

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI
    DispenserContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // NOLINTEND
};
