#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerScreenContext;
class ItemStack;
class Player;
// clang-format on

class CrafterContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mLastCachedResultItem;
    // NOLINTEND

public:
    // prevent constructor by default
    CrafterContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrafterContainerManagerModel() /*override*/ = default;

    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CrafterContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
