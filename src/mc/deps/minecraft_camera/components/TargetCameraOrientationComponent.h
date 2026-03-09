#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct TargetCameraOrientationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::qua<float>> mTargetCameraOrientation;
    // NOLINTEND
};

} // namespace MinecraftCamera
