#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBBucket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk230b65;
    ::ll::UntypedStorage<4, 4>  mUnk221fb2;
    ::ll::UntypedStorage<8, 24> mUnk830088;
    ::ll::UntypedStorage<1, 1>  mUnk4d486b;
    ::ll::UntypedStorage<1, 1>  mUnkef625e;
    // NOLINTEND

public:
    // prevent constructor by default
    AABBBucket& operator=(AABBBucket const&);
    AABBBucket(AABBBucket const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AABBBucket();

    MCAPI void clearDirty();

    MCAPI void clearNeedsFinalize();

    MCAPI bool isDirty();

    MCAPI void markDirty();

    MCAPI void mergeAABBs();

    MCAPI bool needsFinalize() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
