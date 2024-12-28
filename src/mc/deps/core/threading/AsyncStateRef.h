#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AsyncStateRef {
public:
    // prevent constructor by default
    AsyncStateRef& operator=(AsyncStateRef const&);
    AsyncStateRef(AsyncStateRef const&);
    AsyncStateRef();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AsyncStateRef();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
