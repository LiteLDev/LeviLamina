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
    ::ll::UntypedStorage<8, 64> mUnk393ac9;
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeIngredientSet& operator=(RecipeIngredientSet const&);
    RecipeIngredientSet(RecipeIngredientSet const&);
    RecipeIngredientSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void add(::ItemStackBase const& item);

    MCNAPI_C void add(::std::vector<::ItemStack> const& list);

    MCNAPI_C ~RecipeIngredientSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
