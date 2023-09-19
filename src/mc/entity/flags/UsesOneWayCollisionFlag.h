#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UsesOneWayCollisionFlag {
public:
    // prevent constructor by default
    UsesOneWayCollisionFlag& operator=(UsesOneWayCollisionFlag const&);
    UsesOneWayCollisionFlag(UsesOneWayCollisionFlag const&);
    UsesOneWayCollisionFlag();
};
