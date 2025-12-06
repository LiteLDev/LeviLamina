#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackBase;
// clang-format on

class RecipeIngredientSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, int>> mSet;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void add(::ItemStackBase const& item);

    MCAPI void add(::std::vector<::ItemStack> const& list);

    MCAPI ~RecipeIngredientSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
