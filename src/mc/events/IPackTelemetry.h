#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPackTelemetry {
public:
    // prevent constructor by default
    IPackTelemetry& operator=(IPackTelemetry const&);
    IPackTelemetry(IPackTelemetry const&);
    IPackTelemetry();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPackTelemetry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
