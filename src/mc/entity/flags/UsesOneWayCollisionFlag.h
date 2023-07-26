#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UsesOneWayCollisionFlag {

public:
    // prevent constructor by default
    UsesOneWayCollisionFlag& operator=(UsesOneWayCollisionFlag const&) = delete;
    UsesOneWayCollisionFlag(UsesOneWayCollisionFlag const&)            = delete;
    UsesOneWayCollisionFlag()                                          = delete;
};
