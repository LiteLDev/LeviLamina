#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraActivationRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mActivationPriority;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static uint const& TRIPOD_CAMERA_MODE_PRIORITY();
    // NOLINTEND
};

} // namespace MinecraftCamera
