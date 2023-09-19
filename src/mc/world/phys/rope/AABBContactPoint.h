#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBContactPoint {
public:
    // prevent constructor by default
    AABBContactPoint& operator=(AABBContactPoint const&);
    AABBContactPoint(AABBContactPoint const&);
    AABBContactPoint();
};
