#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RecipeIngredientSearchResultsUtil {

struct ItemSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk371ff1;
    ::ll::UntypedStorage<8, 24> mUnk837011;
    ::ll::UntypedStorage<4, 4>  mUnk8bff3d;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemSearchResults& operator=(ItemSearchResults const&);
    ItemSearchResults(ItemSearchResults const&);
    ItemSearchResults();
};

} // namespace RecipeIngredientSearchResultsUtil
