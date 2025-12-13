#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStack;
class Player;
struct RecipeNetIdTag;
// clang-format on

class SmithingTableContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTableContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmithingTableContainerManagerModel() /*override*/ = default;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void setData(int, int) /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SmithingTableContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);

    MCAPI_C void fireItemAcquiredEvent(::ItemInstance const& instance, int count);

    MCAPI_C ::std::pair<::ItemInstance, ::RecipeNetId> getResultForItems(
        ::ItemStack const& templateStack,
        ::ItemStack const& inputStack,
        ::ItemStack const& materialStack
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& INPUT_SLOT();

    MCAPI static int const& MATERIAL_SLOT();

    MCAPI static int const& TEMPLATE_SLOT();
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

    MCFOLD void $setData(int, int);

    MCAPI bool $isValid(float pickRange);

    MCFOLD void $broadcastChanges();

    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
