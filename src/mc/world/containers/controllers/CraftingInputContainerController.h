#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemInstance;
class Recipe;
class RecipeIngredient;
// clang-format on

class CraftingInputContainerController : public ::CraftingContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mRecipeItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingInputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingInputContainerController() /*override*/ = default;

    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;

    virtual ::ItemInstance const& getRecipeItem(int slot) const /*override*/;

    virtual void clearSelectedRecipe() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit CraftingInputContainerController(::std::shared_ptr<::ContainerModel> containerModel);

    MCNAPI_C void onRecipeSelectedWithSpecificIngredients(
        ::Recipe const*                          recipe,
        uint64                                   gridSize,
        bool                                     displayGhostItems,
        ::std::vector<::RecipeIngredient> const& ingredients
    );
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

    MCNAPI ::ItemInstance const& $getRecipeItem(int slot) const;

    MCNAPI void $clearSelectedRecipe();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
