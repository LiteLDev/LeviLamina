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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    UnlockedRecipesClientComponent& operator=(UnlockedRecipesClientComponent const&);
    UnlockedRecipesClientComponent();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI UnlockedRecipesClientComponent(::UnlockedRecipesClientComponent const&);

    MCAPI void addUnlockedRecipes(
        ::Recipes const&                    recipes,
        ::std::vector<::std::string> const& unlockedRecipeIds,
        bool                                newlyUnlocked
    );

    MCAPI bool isRecipeUnlocked(::Recipe const& recipe) const;

    MCAPI ::UnlockedRecipesClientComponent& operator=(::UnlockedRecipesClientComponent&&);

    MCAPI void removeRecipes(::Recipes const& recipes, ::std::vector<::std::string> const& unlockedRecipeIds);

    MCAPI ~UnlockedRecipesClientComponent();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::UnlockedRecipesClientComponent const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
