#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorizontalCollisionFlag {

public:
    // prevent constructor by default
    HorizontalCollisionFlag& operator=(HorizontalCollisionFlag const&) = delete;
    HorizontalCollisionFlag(HorizontalCollisionFlag const&)            = delete;
    HorizontalCollisionFlag()                                          = delete;
};
