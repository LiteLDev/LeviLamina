#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    // prevent constructor by default
    UnlockedRecipesClientComponent& operator=(UnlockedRecipesClientComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C UnlockedRecipesClientComponent();

    MCNAPI_C UnlockedRecipesClientComponent(::UnlockedRecipesClientComponent const&);

    MCNAPI_C void addUnlockedRecipes(
        ::Recipes const&                    recipes,
        ::std::vector<::std::string> const& unlockedRecipeIds,
        bool                                newlyUnlocked
    );

    MCNAPI_C ::UnlockedRecipesClientComponent& operator=(::UnlockedRecipesClientComponent&&);

    MCNAPI_C void removeRecipes(::Recipes const& recipes, ::std::vector<::std::string> const& unlockedRecipeIds);

    MCNAPI_C ~UnlockedRecipesClientComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::UnlockedRecipesClientComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
