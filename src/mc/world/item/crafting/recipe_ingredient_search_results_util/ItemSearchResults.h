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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemSearchResults& operator=(ItemSearchResults const&);
    ItemSearchResults();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ItemSearchResults(::RecipeIngredientSearchResultsUtil::ItemSearchResults const&);

    MCAPI ::RecipeIngredientSearchResultsUtil::ItemSearchResults&
    operator=(::RecipeIngredientSearchResultsUtil::ItemSearchResults&&);

    MCAPI ~ItemSearchResults();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::RecipeIngredientSearchResultsUtil::ItemSearchResults const&);
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

} // namespace RecipeIngredientSearchResultsUtil
