#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraActivationRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk73526a;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraActivationRequestComponent& operator=(CameraActivationRequestComponent const&);
    CameraActivationRequestComponent(CameraActivationRequestComponent const&);
    CameraActivationRequestComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static uint const& TRIPOD_CAMERA_MODE_PRIORITY();
    // NOLINTEND
};

} // namespace MinecraftCamera
