#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorizontalCollisionFlag {
public:
    // prevent constructor by default
    HorizontalCollisionFlag& operator=(HorizontalCollisionFlag const&);
    HorizontalCollisionFlag(HorizontalCollisionFlag const&);
    HorizontalCollisionFlag();
};
