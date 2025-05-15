#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerScreenContext;
class Player;
struct ActorUniqueID;
// clang-format on

class HopperContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    HopperContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HopperContainerManagerModel() /*override*/ = default;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HopperContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);

    MCNAPI HopperContainerManagerModel(::ContainerID containerId, ::Player& player, ::ActorUniqueID const& uniqueID);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);

    MCNAPI void* $ctor(::ContainerID containerId, ::Player& player, ::ActorUniqueID const& uniqueID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
