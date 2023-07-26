#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBBucket {

public:
    // prevent constructor by default
    AABBBucket& operator=(AABBBucket const&) = delete;
    AABBBucket(AABBBucket const&)            = delete;
    AABBBucket()                             = delete;

public:
    /**
     * @symbol ?mergeAABBs\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void mergeAABBs(); // NOLINT
};
