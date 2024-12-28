#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBPred {
public:
    // prevent constructor by default
    AABBPred& operator=(AABBPred const&);
    AABBPred(AABBPred const&);
    AABBPred();
};
