#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkeletonFlag {
public:
    // prevent constructor by default
    SkeletonFlag& operator=(SkeletonFlag const&);
    SkeletonFlag(SkeletonFlag const&);
    SkeletonFlag();
};
