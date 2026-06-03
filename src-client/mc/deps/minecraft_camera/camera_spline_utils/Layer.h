#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CameraSplineUtils { struct Keyframe; }
namespace CameraSplineUtils { struct Spline3d; }
// clang-format on

namespace CameraSplineUtils {

struct Layer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraSplineUtils::Keyframe>>   mFrames;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CameraSplineUtils::Spline3d>> mCurveRef;
    // NOLINTEND
};

} // namespace CameraSplineUtils
