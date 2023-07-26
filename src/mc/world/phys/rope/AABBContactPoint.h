#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBContactPoint {

public:
    // prevent constructor by default
    AABBContactPoint& operator=(AABBContactPoint const&) = delete;
    AABBContactPoint(AABBContactPoint const&)            = delete;
    AABBContactPoint()                                   = delete;
};
