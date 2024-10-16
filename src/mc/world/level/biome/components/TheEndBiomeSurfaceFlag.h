#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TheEndBiomeSurfaceFlag {
public:
    // prevent constructor by default
    TheEndBiomeSurfaceFlag& operator=(TheEndBiomeSurfaceFlag const&);
    TheEndBiomeSurfaceFlag(TheEndBiomeSurfaceFlag const&);
    TheEndBiomeSurfaceFlag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TheEndBiomeSurfaceFlag() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
