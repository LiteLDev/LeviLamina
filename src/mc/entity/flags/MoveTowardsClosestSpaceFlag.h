#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveTowardsClosestSpaceFlag {

public:
    // prevent constructor by default
    MoveTowardsClosestSpaceFlag& operator=(MoveTowardsClosestSpaceFlag const&) = delete;
    MoveTowardsClosestSpaceFlag(MoveTowardsClosestSpaceFlag const&)            = delete;
    MoveTowardsClosestSpaceFlag()                                              = delete;
};
