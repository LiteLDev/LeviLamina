#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TemporaryItemCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk88eb70;
    ::ll::UntypedStorage<4, 4>   mUnk6469d7;
    // NOLINTEND

public:
    // prevent constructor by default
    TemporaryItemCounter& operator=(TemporaryItemCounter const&);
    TemporaryItemCounter(TemporaryItemCounter const&);
    TemporaryItemCounter();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~TemporaryItemCounter();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
