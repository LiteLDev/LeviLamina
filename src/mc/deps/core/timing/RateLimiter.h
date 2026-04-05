#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RateLimiter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke6cfa5;
    ::ll::UntypedStorage<8, 8>  mUnkaf5425;
    ::ll::UntypedStorage<8, 24> mUnke3fa43;
    // NOLINTEND

public:
    // prevent constructor by default
    RateLimiter& operator=(RateLimiter const&);
    RateLimiter(RateLimiter const&);
    RateLimiter();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI RateLimiter(uint64 limit, ::std::chrono::seconds timeIntervalSeconds);

    MCNAPI bool tryAddInstance();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(uint64 limit, ::std::chrono::seconds timeIntervalSeconds);
#endif
    // NOLINTEND
};
