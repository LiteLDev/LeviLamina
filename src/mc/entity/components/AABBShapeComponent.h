#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBShapeComponent {
public:
    // prevent constructor by default
    AABBShapeComponent& operator=(AABBShapeComponent const&);
    AABBShapeComponent(AABBShapeComponent const&);
    AABBShapeComponent();
};
