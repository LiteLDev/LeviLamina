#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"

class BlastFurnaceContainerManagerModel : public ::FurnaceContainerManagerModel {
public:
    // prevent constructor by default
    BlastFurnaceContainerManagerModel& operator=(BlastFurnaceContainerManagerModel const&);
    BlastFurnaceContainerManagerModel(BlastFurnaceContainerManagerModel const&);
    BlastFurnaceContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlastFurnaceContainerManagerModel() = default;

    MCAPI
    BlastFurnaceContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // NOLINTEND
};
