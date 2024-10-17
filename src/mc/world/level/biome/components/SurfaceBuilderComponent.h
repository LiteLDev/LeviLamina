#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceBuilderComponent {
public:
    // prevent constructor by default
    SurfaceBuilderComponent& operator=(SurfaceBuilderComponent const&);
    SurfaceBuilderComponent(SurfaceBuilderComponent const&);
    SurfaceBuilderComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceBuilderComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
