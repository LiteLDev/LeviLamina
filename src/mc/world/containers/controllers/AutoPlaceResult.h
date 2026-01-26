#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AutoPlaceResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf5d262;
    ::ll::UntypedStorage<4, 4>  mUnkcc0bf9;
    ::ll::UntypedStorage<1, 1>  mUnkec3cd5;
    // NOLINTEND

public:
    // prevent constructor by default
    AutoPlaceResult& operator=(AutoPlaceResult const&);
    AutoPlaceResult(AutoPlaceResult const&);
    AutoPlaceResult();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
