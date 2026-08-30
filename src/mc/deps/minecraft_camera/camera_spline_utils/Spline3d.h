#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_spline_utils/SplineType.h"

namespace CameraSplineUtils {

struct Spline3d {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Spline3d();

    virtual ::glm::vec3 eval(float t) const = 0;

    virtual ::CameraSplineUtils::SplineType getType() const = 0;
    // NOLINTEND
};

} // namespace CameraSplineUtils
