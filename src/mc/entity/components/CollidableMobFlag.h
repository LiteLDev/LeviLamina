#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CollidableMobFlag {
public:
    // prevent constructor by default
    CollidableMobFlag& operator=(CollidableMobFlag const&);
    CollidableMobFlag(CollidableMobFlag const&);
    CollidableMobFlag();
};
