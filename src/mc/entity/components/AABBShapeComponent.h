#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBShapeComponent {

public:
    // prevent constructor by default
    AABBShapeComponent& operator=(AABBShapeComponent const&) = delete;
    AABBShapeComponent(AABBShapeComponent const&)            = delete;
    AABBShapeComponent()                                     = delete;
};
