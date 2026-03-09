#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraCustomFovEaseComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mClearCustomFov;
    ::ll::TypedStorage<4, 4, float>                          mPreviousCustomFov;
    ::ll::TypedStorage<4, 4, float>                          mPercentage;
    ::ll::TypedStorage<4, 4, float>                          mBlendTime;
    ::ll::TypedStorage<8, 8, float (*)(float, float, float)> mEaseFunction;
    // NOLINTEND
};

} // namespace MinecraftCamera
