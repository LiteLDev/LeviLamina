#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkeletonFlagComponent {
public:
    // prevent constructor by default
    SkeletonFlagComponent& operator=(SkeletonFlagComponent const&);
    SkeletonFlagComponent(SkeletonFlagComponent const&);
    SkeletonFlagComponent();
};
