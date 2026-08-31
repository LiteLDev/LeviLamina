#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"

// auto generated forward declare list
// clang-format off
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
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CraftingInputContainerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CraftingInputContainerController() /*override*/;
#endif

    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;

    virtual ::ItemInstance const& getRecipeItem(int slot) const /*override*/;

    virtual void clearSelectedRecipe() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void onRecipeSelectedWithSpecificIngredients(
        ::Recipe const*                          recipe,
        uint64                                   gridSize,
        bool                                     displayGhostItems,
        ::std::vector<::RecipeIngredient> const& ingredients
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
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
};
