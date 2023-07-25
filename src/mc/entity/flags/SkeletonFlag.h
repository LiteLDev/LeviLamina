#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkeletonFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETONFLAG
public:
    SkeletonFlag& operator=(SkeletonFlag const&) = delete;
    SkeletonFlag(SkeletonFlag const&)            = delete;
    SkeletonFlag()                               = delete;
#endif

public:
};
