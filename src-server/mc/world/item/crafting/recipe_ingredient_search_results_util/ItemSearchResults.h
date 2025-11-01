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
    ::ll::TypedStorage<4, 4, int> mTotalCount;
    // NOLINTEND

};

}
