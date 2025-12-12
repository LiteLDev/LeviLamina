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
    ItemSearchResults();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ItemSearchResults(::RecipeIngredientSearchResultsUtil::ItemSearchResults const&);

    MCNAPI_C ::RecipeIngredientSearchResultsUtil::ItemSearchResults&
    operator=(::RecipeIngredientSearchResultsUtil::ItemSearchResults&&);

    MCNAPI_C ~ItemSearchResults();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::RecipeIngredientSearchResultsUtil::ItemSearchResults const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace RecipeIngredientSearchResultsUtil
