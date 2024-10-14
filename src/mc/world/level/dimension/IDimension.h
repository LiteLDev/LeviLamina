#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDimension {
public:
    // prevent constructor by default
    IDimension& operator=(IDimension const&);
    IDimension(IDimension const&);
    IDimension();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDimension();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
