#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class DropperContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    DropperContainerManagerModel& operator=(DropperContainerManagerModel const&);
    DropperContainerManagerModel(DropperContainerManagerModel const&);
    DropperContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DropperContainerManagerModel() = default;

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI DropperContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    MCAPI class ContainerScreenContext _postInit$();

    // NOLINTEND
};
