#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IngredientSearchInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc44b53;
    ::ll::UntypedStorage<4, 4>  mUnkafbe45;
    // NOLINTEND

public:
    // prevent constructor by default
    IngredientSearchInfo& operator=(IngredientSearchInfo const&);
    IngredientSearchInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C IngredientSearchInfo(::IngredientSearchInfo const&);

    MCNAPI_C ~IngredientSearchInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::IngredientSearchInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
