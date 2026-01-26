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
    MCAPI_C void addUnlockedRecipes(
        ::Recipes const&                    recipes,
        ::std::vector<::std::string> const& unlockedRecipeIds,
        bool                                newlyUnlocked
    );

    MCAPI_C bool isRecipeUnlocked(::Recipe const& recipe) const;

    MCAPI_C void removeRecipes(::Recipes const& recipes, ::std::vector<::std::string> const& unlockedRecipeIds);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::UnlockedRecipesClientComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};
