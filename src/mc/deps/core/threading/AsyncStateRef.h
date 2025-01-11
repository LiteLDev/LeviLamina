#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AsyncStateRef {
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
