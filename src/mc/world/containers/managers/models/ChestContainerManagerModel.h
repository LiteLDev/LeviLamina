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
    ::ll::UntypedStorage<4, 4> mUnkb77461;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestContainerManagerModel& operator=(ChestContainerManagerModel const&);
    ChestContainerManagerModel(ChestContainerManagerModel const&);
    ChestContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestContainerManagerModel() /*override*/;

    // vIndex: 19
    virtual bool isValid(float pickRange) /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChestContainerManagerModel(::ContainerID containerId, ::Player& player, ::ActorUniqueID uniqueID);

    MCAPI ChestContainerManagerModel(
        ::ContainerID     containerId,
        ::Player&         player,
        ::BlockPos const& blockPos,
        ::BlockActorType  blockActorType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::ActorUniqueID uniqueID);

    MCAPI void*
    $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos, ::BlockActorType blockActorType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValid(float pickRange);

    MCAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
