#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerInstanceRequestResourceReload {
public:
    // prevent constructor by default
    ServerInstanceRequestResourceReload& operator=(ServerInstanceRequestResourceReload const&);
    ServerInstanceRequestResourceReload(ServerInstanceRequestResourceReload const&);
    ServerInstanceRequestResourceReload();

public:
    // NOLINTBEGIN
    MCAPI ~ServerInstanceRequestResourceReload();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
