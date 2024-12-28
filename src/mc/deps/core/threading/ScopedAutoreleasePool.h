#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedAutoreleasePool {
public:
    // prevent constructor by default
    ScopedAutoreleasePool& operator=(ScopedAutoreleasePool const&);
    ScopedAutoreleasePool(ScopedAutoreleasePool const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScopedAutoreleasePool();

    MCAPI void drain();

    MCAPI ~ScopedAutoreleasePool();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
