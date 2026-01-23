#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

class BoneOrientationTransform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, ::Vec3[3]> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C BoneOrientationTransform();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();
    // NOLINTEND
};
