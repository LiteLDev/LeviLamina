#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsyncStateRef {
public:
    // prevent constructor by default
    AsyncStateRef& operator=(AsyncStateRef const&);
    AsyncStateRef(AsyncStateRef const&);
    AsyncStateRef();

public:
    // NOLINTBEGIN
    MCAPI ~AsyncStateRef();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
