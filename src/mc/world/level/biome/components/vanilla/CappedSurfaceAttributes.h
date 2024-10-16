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
    // vIndex: 0
    virtual ~CappedSurfaceAttributes() = default;

    MCAPI void initializeNoise(uint levelSeed);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
