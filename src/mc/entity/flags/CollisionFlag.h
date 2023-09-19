#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CollisionFlag {
public:
    // prevent constructor by default
    CollisionFlag& operator=(CollisionFlag const&);
    CollisionFlag(CollisionFlag const&);
    CollisionFlag();
};
