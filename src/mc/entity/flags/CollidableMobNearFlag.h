#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CollidableMobNearFlag {

public:
    // prevent constructor by default
    CollidableMobNearFlag& operator=(CollidableMobNearFlag const&) = delete;
    CollidableMobNearFlag(CollidableMobNearFlag const&)            = delete;
    CollidableMobNearFlag()                                        = delete;
};
