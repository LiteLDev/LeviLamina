#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class Recipe;
// clang-format on

class CraftingOutputContainerController : public ::CraftingContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mRecipeItem;
    ::ll::TypedStorage<1, 1, bool>             mIsRecipeCraftable;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingOutputContainerController() /*override*/ = default;

    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;

    virtual void onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems) /*override*/;

    virtual ::ItemInstance const& getRecipeItem(int slot) const /*override*/;

    virtual void clearSelectedRecipe() /*override*/;

    virtual bool _canRemove(int slot, int removeCount) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::shared_ptr<::ContainerModel> containerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI int $getBackgroundStyle(int slot, bool inventoryContainsItem) const;

    MCNAPI void $onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems);

    MCNAPI ::ItemInstance const& $getRecipeItem(int slot) const;

    MCNAPI void $clearSelectedRecipe();

    MCNAPI bool $_canRemove(int slot, int removeCount) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
