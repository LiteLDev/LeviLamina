#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DistanceSortedActor {

public:
    // prevent constructor by default
    DistanceSortedActor& operator=(DistanceSortedActor const&) = delete;
    DistanceSortedActor(DistanceSortedActor const&)            = delete;
    DistanceSortedActor()                                      = delete;
};
