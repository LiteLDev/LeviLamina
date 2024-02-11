#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBBucket {
public:
    // prevent constructor by default
    AABBBucket& operator=(AABBBucket const&);
    AABBBucket(AABBBucket const&);

public:
    // NOLINTBEGIN
    // symbol: ??0AABBBucket@@QEAA@XZ
    MCAPI AABBBucket();

    // symbol: ?clearDirty@AABBBucket@@QEAAXXZ
    MCAPI void clearDirty();

    // symbol: ?clearNeedsFinalize@AABBBucket@@QEAAXXZ
    MCAPI void clearNeedsFinalize();

    // symbol: ?isDirty@AABBBucket@@QEAA_NXZ
    MCAPI bool isDirty();

    // symbol: ?markDirty@AABBBucket@@QEAAXXZ
    MCAPI void markDirty();

    // symbol: ?mergeAABBs@AABBBucket@@QEAAXXZ
    MCAPI void mergeAABBs();

    // symbol: ?needsFinalize@AABBBucket@@QEBA_NXZ
    MCAPI bool needsFinalize() const;

    // NOLINTEND
};
