#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace CaveFeatureUtils {

struct CarvingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHorizontalRadiusMultiplier;
    ::ll::TypedStorage<4, 4, float> mVerticalRadiusMultiplier;
    ::ll::TypedStorage<4, 4, float> mFloorLevel;
    ::ll::TypedStorage<4, 12, ::Vec3> mOriginalStartPos;
    // NOLINTEND

};

}
