#pragma once

#include "mc/_HeaderOutputPredefine.h"

class _TickPtr {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void invalidate() = 0;

    virtual ~_TickPtr();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
