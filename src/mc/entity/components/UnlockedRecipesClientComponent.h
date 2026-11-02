#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Recipe;
class Recipes;
// clang-format on

class UnlockedRecipesClientComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mUnlockedCategories;
    ::ll::TypedStorage<4, 4, int>                                  mNewlyUnlockedCategories;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>           mUnlockedItems;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mUnlockedRecipes;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mNewlyUnlockedRecipes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI UnlockedRecipesClientComponent();

    MCNAPI void addUnlockedRecipes(
        ::Recipes const&                    recipes,
        ::std::vector<::std::string> const& unlockedRecipeIds,
        bool                                newlyUnlocked
    );
#endif

    MCNAPI bool isRecipeUnlocked(::Recipe const& recipe) const;

    MCNAPI bool isRecipeUnlocked(::std::string const& recipeId) const;

#ifdef LL_PLAT_C
    MCNAPI void removeAllRecipes();

    MCNAPI void removeRecipes(::Recipes const& recipes, ::std::vector<::std::string> const& unlockedRecipeIds);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};
