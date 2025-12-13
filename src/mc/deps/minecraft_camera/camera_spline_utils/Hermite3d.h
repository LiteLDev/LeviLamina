#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_spline_utils/Spline3d.h"
#include "mc/deps/minecraft_camera/camera_spline_utils/SplineType.h"

namespace CameraSplineUtils {

struct Hermite3d : public ::CameraSplineUtils::Spline3d {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4aa2f0;
    ::ll::UntypedStorage<8, 24> mUnk9a00f0;
    ::ll::UntypedStorage<8, 24> mUnk9d0cd8;
    ::ll::UntypedStorage<1, 1>  mUnkf32b7d;
    // NOLINTEND

public:
    // prevent constructor by default
    Hermite3d& operator=(Hermite3d const&);
    Hermite3d(Hermite3d const&);
    Hermite3d();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::glm::vec3 eval(float) const /*override*/;

    // vIndex: 2
    virtual ::CameraSplineUtils::SplineType getType() const /*override*/;

    // vIndex: 0
    virtual ~Hermite3d() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CameraSplineUtils
