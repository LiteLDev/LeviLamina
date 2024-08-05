#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBShapeComponent {
public:
    // prevent constructor by default
    AABBShapeComponent(AABBShapeComponent const&);
    AABBShapeComponent();

public:
    // NOLINTBEGIN
    MCAPI struct AABBShapeComponent& operator=(struct AABBShapeComponent const&);

    // NOLINTEND
};
