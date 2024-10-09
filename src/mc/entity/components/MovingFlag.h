#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovingFlag {
public:
    // prevent constructor by default
    MovingFlag& operator=(MovingFlag const&);
    MovingFlag(MovingFlag const&);
    MovingFlag();
};
