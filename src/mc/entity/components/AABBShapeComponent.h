#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBShapeComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBSHAPECOMPONENT
public:
    AABBShapeComponent& operator=(AABBShapeComponent const&) = delete;
    AABBShapeComponent(AABBShapeComponent const&)            = delete;
    AABBShapeComponent()                                     = delete;
#endif

public:
};
