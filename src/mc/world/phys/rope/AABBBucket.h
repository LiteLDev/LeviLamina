#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBBucket {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBBUCKET
public:
    AABBBucket& operator=(AABBBucket const&) = delete;
    AABBBucket(AABBBucket const&)            = delete;
    AABBBucket()                             = delete;
#endif

public:
    /**
     * @symbol ?mergeAABBs\@AABBBucket\@\@QEAAXXZ
     */
    MCAPI void mergeAABBs();
};
