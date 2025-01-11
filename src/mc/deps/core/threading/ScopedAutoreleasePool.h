#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedAutoreleasePool {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScopedAutoreleasePool();

    MCFOLD void drain();

    MCAPI ~ScopedAutoreleasePool();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
