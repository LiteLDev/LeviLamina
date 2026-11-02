#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStack;
struct RecipeNetIdTag;
// clang-format on

class SmithingTableContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    // NOLINTEND

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
#ifdef LL_PLAT_C
    MCNAPI void fireItemAcquiredEvent(::ItemInstance const& instance, int count);

    MCNAPI ::std::pair<::ItemInstance, ::RecipeNetId> getResultForItems(
        ::ItemStack const& templateStack,
        ::ItemStack const& inputStack,
        ::ItemStack const& materialStack
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCNAPI ::ItemStack const& $getSlot(int slot) const;

    MCNAPI void $setData(int, int);

    MCNAPI bool $isValid(float pickRange);

    MCNAPI void $broadcastChanges();

    MCNAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
