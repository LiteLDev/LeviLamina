#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBBucket {
public:
    // prevent constructor by default
    AABBBucket& operator=(AABBBucket const&);
    AABBBucket(AABBBucket const&);
    AABBBucket();

public:
    // NOLINTBEGIN
    MCAPI void mergeAABBs();

    // NOLINTEND
};
