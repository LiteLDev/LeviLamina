#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReviewByUserParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk94f1af;
    ::ll::UntypedStorage<8, 32> mUnk73378e;
    // NOLINTEND

public:
    // prevent constructor by default
    ReviewByUserParams& operator=(ReviewByUserParams const&);
    ReviewByUserParams(ReviewByUserParams const&);
    ReviewByUserParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ReviewByUserParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
