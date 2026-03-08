#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct TargetCameraRotationSpeedComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mCameraRotationSpeed;
    // NOLINTEND
};

} // namespace MinecraftCamera
