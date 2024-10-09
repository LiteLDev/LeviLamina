#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RewindCollisionShapesComponent {
public:
    // prevent constructor by default
    RewindCollisionShapesComponent& operator=(RewindCollisionShapesComponent const&);
    RewindCollisionShapesComponent(RewindCollisionShapesComponent const&);
    RewindCollisionShapesComponent();

public:
    // NOLINTBEGIN
    MCAPI ~RewindCollisionShapesComponent();

    // NOLINTEND
};
