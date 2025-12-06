#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IngredientSearchInfo;
// clang-format on

struct IngredientSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::IngredientSearchInfo>>> mSearchInfo;
    ::ll::TypedStorage<4, 4, int>                                                   mTotalCraftable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~IngredientSearchResults();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
