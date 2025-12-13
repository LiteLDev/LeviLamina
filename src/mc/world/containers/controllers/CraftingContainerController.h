#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemInstance;
class Recipe;
// clang-format on

class CraftingContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Recipe const*>                mCurrentRecipe;
    ::ll::TypedStorage<4, 4, int>                            mGridSize;
    ::ll::TypedStorage<1, 1, bool>                           mDisplayOnlyGhostItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mGhostItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CraftingContainerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CraftingContainerController() /*override*/;
#endif

    virtual ::ItemInstance const& getRecipeItem(int) const = 0;

    virtual void onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems);

    virtual void clearSelectedRecipe();

    virtual ::Recipe const* getSelectedRecipe() const;

    virtual void setGhostItem(::ItemInstance const& item, int slot, bool showStackSize);

    virtual ::ItemInstance const& getGhostItem(int slot) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CraftingContainerController(::std::shared_ptr<::ContainerModel> containerModel, bool dropOnDelete);
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
    MCNAPI void $onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems);

    MCNAPI void $clearSelectedRecipe();

    MCNAPI ::Recipe const* $getSelectedRecipe() const;

    MCNAPI void $setGhostItem(::ItemInstance const& item, int slot, bool showStackSize);

    MCNAPI ::ItemInstance const& $getGhostItem(int slot) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
