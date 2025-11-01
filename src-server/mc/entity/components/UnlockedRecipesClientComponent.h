#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UnlockedRecipesClientComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mUnlockedCategories;
    ::ll::TypedStorage<4, 4, int> mNewlyUnlockedCategories;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>> mUnlockedItems;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mUnlockedRecipes;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mNewlyUnlockedRecipes;
    // NOLINTEND

};
