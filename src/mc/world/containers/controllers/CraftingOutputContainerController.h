#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
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

    virtual ::ItemInstance const& getRecipeItem(int) const /*override*/;

    virtual void clearSelectedRecipe() /*override*/;

    virtual bool _canRemove(int modelSlot, int removeCount) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
