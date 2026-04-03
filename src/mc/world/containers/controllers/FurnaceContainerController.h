#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
// clang-format on

class FurnaceContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mRecipeItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mGhostItem;
    ::ll::TypedStorage<1, 1, bool>             mDisplayOnlyGhostItems;
    ::ll::TypedStorage<1, 1, bool>             mIsRecipeSmeltable;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~FurnaceContainerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FurnaceContainerController() /*override*/;
#endif

    virtual ::ItemInstance const& getRecipeItem(int slot) const /*override*/;

    virtual void onRecipeSelected(::ItemInstance const& recipeItem, bool displayGhostItems);

    virtual void setGhostItem(::ItemInstance const& item);

    virtual ::ItemInstance const& getGhostItem() const;

    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void clearSelectedRecipe();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::shared_ptr<::ContainerModel> containerModel, bool dropOnDelete);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ItemInstance const& $getRecipeItem(int slot) const;

    MCNAPI void $onRecipeSelected(::ItemInstance const& recipeItem, bool displayGhostItems);

    MCNAPI void $setGhostItem(::ItemInstance const& item);

    MCNAPI ::ItemInstance const& $getGhostItem() const;

    MCNAPI int $getBackgroundStyle(int slot, bool inventoryContainsItem) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
