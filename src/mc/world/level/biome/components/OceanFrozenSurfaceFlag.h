#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OceanFrozenSurfaceFlag {
public:
    // prevent constructor by default
    OceanFrozenSurfaceFlag& operator=(OceanFrozenSurfaceFlag const&);
    OceanFrozenSurfaceFlag(OceanFrozenSurfaceFlag const&);
    OceanFrozenSurfaceFlag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OceanFrozenSurfaceFlag() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
