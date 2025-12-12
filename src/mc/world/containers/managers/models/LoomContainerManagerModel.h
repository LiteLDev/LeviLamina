#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStack;
class Player;
// clang-format on

class LoomContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    // NOLINTEND

public:
    // prevent constructor by default
    LoomContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoomContainerManagerModel() /*override*/ = default;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void setData(int id, int value) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoomContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);

    MCFOLD_C void fireItemAcquiredEvent(::ItemInstance const& item, int count);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCFOLD void $setData(int id, int value);

    MCFOLD void $broadcastChanges();

    MCAPI bool $isValid(float pickRange);

    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
