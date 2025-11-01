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
    ::ll::TypedStorage<1, 1, bool> mIsRecipeCraftable;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingOutputContainerController() /*override*/ = default;

    // vIndex: 5
    virtual int getBackgroundStyle(int, bool) const /*override*/;

    // vIndex: 10
    virtual void onRecipeSelected(::Recipe const*, uint64, bool) /*override*/;

    // vIndex: 1
    virtual ::ItemInstance const& getRecipeItem(int) const /*override*/;

    // vIndex: 11
    virtual void clearSelectedRecipe() /*override*/;

    // vIndex: 8
    virtual bool _canRemove(int, int) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
