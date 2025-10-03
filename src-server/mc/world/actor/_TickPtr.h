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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
