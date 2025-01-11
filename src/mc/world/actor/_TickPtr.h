#pragma once

#include "mc/_HeaderOutputPredefine.h"

class _TickPtr {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void invalidate() = 0;

    // vIndex: 1
    virtual ~_TickPtr();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
