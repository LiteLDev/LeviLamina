#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VerticalCollisionFlag {
public:
    // prevent constructor by default
    VerticalCollisionFlag& operator=(VerticalCollisionFlag const&);
    VerticalCollisionFlag(VerticalCollisionFlag const&);
    VerticalCollisionFlag();
};
