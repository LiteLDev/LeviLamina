#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CollidableMobFlag {

public:
    // prevent constructor by default
    CollidableMobFlag& operator=(CollidableMobFlag const&) = delete;
    CollidableMobFlag(CollidableMobFlag const&)            = delete;
    CollidableMobFlag()                                    = delete;
};
