#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkeletonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mParentIndices;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>   mBoneOrientationIndices;
    // NOLINTEND
};
