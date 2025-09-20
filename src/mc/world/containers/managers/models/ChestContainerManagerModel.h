#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerScreenContext;
class Player;
struct ActorUniqueID;
// clang-format on

class ChestContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockActorType;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestContainerManagerModel() /*override*/ = default;

    // vIndex: 19
    virtual bool isValid(float pickRange) /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChestContainerManagerModel(::ContainerID containerId, ::Player& player, ::ActorUniqueID uniqueID);

    MCNAPI ChestContainerManagerModel(
        ::ContainerID     containerId,
        ::Player&         player,
        ::BlockPos const& blockPos,
        ::BlockActorType  blockActorType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID containerId, ::Player& player, ::ActorUniqueID uniqueID);

    MCNAPI void*
    $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos, ::BlockActorType blockActorType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid(float pickRange);

    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
