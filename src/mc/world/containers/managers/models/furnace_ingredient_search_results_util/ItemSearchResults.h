#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FurnaceIngredientSearchResultsUtil {

struct ItemSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk335dc2;
    ::ll::UntypedStorage<4, 4>  mUnke8e253;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemSearchResults& operator=(ItemSearchResults const&);
    ItemSearchResults();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemSearchResults(::FurnaceIngredientSearchResultsUtil::ItemSearchResults const&);

    MCNAPI ~ItemSearchResults();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FurnaceIngredientSearchResultsUtil::ItemSearchResults const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace FurnaceIngredientSearchResultsUtil
