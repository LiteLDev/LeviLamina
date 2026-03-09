#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CatmullRomSpline.h"

namespace MinecraftCamera {

struct CameraSplineComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::CatmullRomSpline> mSpline;
    ::ll::TypedStorage<4, 4, float>               mFollowSpeed;
    ::ll::TypedStorage<4, 4, float>               mFollowSpringStiffness;
    ::ll::TypedStorage<4, 12, ::glm::vec3>        mSpringVelocity;
    ::ll::TypedStorage<4, 4, float>               mDistanceAlongCurve;
    // NOLINTEND
};

} // namespace MinecraftCamera
