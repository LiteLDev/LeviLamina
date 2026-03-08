#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct TargetCameraRotationLimitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAverageHorizontalRotLimit;
    ::ll::TypedStorage<4, 4, float> mAverageVerticalRotLimit;
    // NOLINTEND
};

} // namespace MinecraftCamera
