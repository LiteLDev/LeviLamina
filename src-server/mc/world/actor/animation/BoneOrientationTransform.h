#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneOrientationTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 36> mUnkba50ae;
    // NOLINTEND

public:
    // prevent constructor by default
    BoneOrientationTransform& operator=(BoneOrientationTransform const&);
    BoneOrientationTransform(BoneOrientationTransform const&);
    BoneOrientationTransform();
};
