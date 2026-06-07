#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedAutoreleasePool {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScopedAutoreleasePool();

    MCNAPI void drain();

#ifdef LL_PLAT_C
    MCNAPI void drainNow();

    MCNAPI void reset();
#endif

    MCNAPI ~ScopedAutoreleasePool();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
