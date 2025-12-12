#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RateLimiter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke6cfa5;
    ::ll::UntypedStorage<8, 8>  mUnkaf5425;
    ::ll::UntypedStorage<8, 24> mUnk50c151;
    // NOLINTEND

public:
    // prevent constructor by default
    RateLimiter& operator=(RateLimiter const&);
    RateLimiter(RateLimiter const&);
    RateLimiter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool tryAddInstance();
    // NOLINTEND
};
