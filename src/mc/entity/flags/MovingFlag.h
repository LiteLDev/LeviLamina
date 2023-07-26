#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovingFlag {

public:
    // prevent constructor by default
    MovingFlag& operator=(MovingFlag const&) = delete;
    MovingFlag(MovingFlag const&)            = delete;
    MovingFlag()                             = delete;
};
