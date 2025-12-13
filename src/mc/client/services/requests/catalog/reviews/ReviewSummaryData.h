#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReviewSummaryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnka5f87b;
    ::ll::UntypedStorage<4, 4>   mUnk7d313e;
    ::ll::UntypedStorage<8, 40>  mUnkb8bf35;
    ::ll::UntypedStorage<8, 288> mUnka2b163;
    ::ll::UntypedStorage<8, 288> mUnk686258;
    // NOLINTEND

public:
    // prevent constructor by default
    ReviewSummaryData& operator=(ReviewSummaryData const&);
    ReviewSummaryData(ReviewSummaryData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ReviewSummaryData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND
};
