#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReviewSummaryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfd3693;
    // NOLINTEND

public:
    // prevent constructor by default
    ReviewSummaryParams& operator=(ReviewSummaryParams const&);
    ReviewSummaryParams(ReviewSummaryParams const&);
    ReviewSummaryParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ReviewSummaryParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
