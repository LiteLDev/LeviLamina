#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
// clang-format on

class BlastFurnaceContainerManagerModel : public ::FurnaceContainerManagerModel {
public:
    // prevent constructor by default
    BlastFurnaceContainerManagerModel& operator=(BlastFurnaceContainerManagerModel const&);
    BlastFurnaceContainerManagerModel(BlastFurnaceContainerManagerModel const&);
    BlastFurnaceContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlastFurnaceContainerManagerModel() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlastFurnaceContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
