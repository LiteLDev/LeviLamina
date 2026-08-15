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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingContainerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CraftingContainerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CraftingContainerController() /*override*/;
#endif

    virtual ::ItemInstance const& getRecipeItem(int slot) const = 0;

    virtual void onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems);

    virtual void clearSelectedRecipe();

    virtual ::Recipe const* getSelectedRecipe() const;

    virtual void setGhostItem(::ItemInstance const& item, int slot, bool showStackSize);

    virtual ::ItemInstance const& getGhostItem(int slot) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI CraftingContainerController(::std::shared_ptr<::ContainerModel> containerModel, bool dropOnDelete);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::shared_ptr<::ContainerModel> containerModel, bool dropOnDelete);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems);

    MCAPI void $clearSelectedRecipe();

    MCFOLD ::Recipe const* $getSelectedRecipe() const;

    MCAPI void $setGhostItem(::ItemInstance const& item, int slot, bool showStackSize);

    MCAPI ::ItemInstance const& $getGhostItem(int slot) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
