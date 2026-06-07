#pragma once

#include "mc/_HeaderOutputPredefine.h"

class _TickPtr {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void invalidate() = 0;

    virtual ~_TickPtr() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
