#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UriListener {
public:
    // prevent constructor by default
    UriListener& operator=(UriListener const&);
    UriListener(UriListener const&);
    UriListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UriListener();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
