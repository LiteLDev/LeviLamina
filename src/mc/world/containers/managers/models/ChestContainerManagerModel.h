#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"
#include "mc/world/level/block/actor/BlockActorType.h"

class ChestContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    ChestContainerManagerModel& operator=(ChestContainerManagerModel const&);
    ChestContainerManagerModel(ChestContainerManagerModel const&);
    ChestContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestContainerManagerModel() = default;

    // vIndex: 16
    virtual bool isValid(float pickRange);

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI ChestContainerManagerModel(::ContainerID containerId, class Player& player, struct ActorUniqueID uniqueID);

    MCAPI ChestContainerManagerModel(
        ::ContainerID         containerId,
        class Player&         player,
        class BlockPos const& blockPos,
        ::BlockActorType      blockActorType
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(::ContainerID containerId, class Player& player, struct ActorUniqueID uniqueID);

    MCAPI void* ctor$(
        ::ContainerID         containerId,
        class Player&         player,
        class BlockPos const& blockPos,
        ::BlockActorType      blockActorType
    );

    MCAPI class ContainerScreenContext _postInit$();

    MCAPI bool isValid$(float pickRange);

    // NOLINTEND
};
