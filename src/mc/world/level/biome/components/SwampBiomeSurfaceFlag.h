#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SwampBiomeSurfaceFlag {
public:
    // prevent constructor by default
    SwampBiomeSurfaceFlag& operator=(SwampBiomeSurfaceFlag const&);
    SwampBiomeSurfaceFlag(SwampBiomeSurfaceFlag const&);
    SwampBiomeSurfaceFlag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwampBiomeSurfaceFlag() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
