#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CappedSurfaceAttributes {
public:
    // prevent constructor by default
    CappedSurfaceAttributes& operator=(CappedSurfaceAttributes const&);
    CappedSurfaceAttributes(CappedSurfaceAttributes const&);
    CappedSurfaceAttributes();

public:
    // NOLINTBEGIN
    // symbol: ?initializeNoise@CappedSurfaceAttributes@@QEAAXI@Z
    MCAPI void initializeNoise(uint);

    // symbol: ??4CappedSurfaceAttributes@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct CappedSurfaceAttributes& operator=(struct CappedSurfaceAttributes&&);

    // NOLINTEND
};
