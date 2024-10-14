#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {
public:
    // prevent constructor by default
    NetworkAddress& operator=(NetworkAddress const&);
    NetworkAddress(NetworkAddress const&);
    NetworkAddress();

public:
    // NOLINTBEGIN
    MCAPI ~NetworkAddress();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
