#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AsyncStateRef {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AsyncStateRef();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
