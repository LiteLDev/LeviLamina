#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RecipeIngredientSearchResultsUtil { struct ContainerInfo; }
// clang-format on

namespace RecipeIngredientSearchResultsUtil {

struct ItemSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredientSearchResultsUtil::ContainerInfo>> mContainerPositions;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mIngredientSlotsItemValidFor;
    ::ll::TypedStorage<4, 4, int>                 mTotalCount;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemSearchResults& operator=(ItemSearchResults const&);
    ItemSearchResults();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemSearchResults(::RecipeIngredientSearchResultsUtil::ItemSearchResults const&);

    MCAPI ::RecipeIngredientSearchResultsUtil::ItemSearchResults&
    operator=(::RecipeIngredientSearchResultsUtil::ItemSearchResults&&);

    MCAPI ~ItemSearchResults();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RecipeIngredientSearchResultsUtil::ItemSearchResults const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RecipeIngredientSearchResultsUtil
