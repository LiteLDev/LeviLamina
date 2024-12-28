#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IngredientSearchResults {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1b9d47;
    ::ll::UntypedStorage<4, 4>  mUnkfe87ab;
    // NOLINTEND

public:
    // prevent constructor by default
    IngredientSearchResults& operator=(IngredientSearchResults const&);
    IngredientSearchResults(IngredientSearchResults const&);
    IngredientSearchResults();
};
