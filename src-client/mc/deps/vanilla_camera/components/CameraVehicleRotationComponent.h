#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaCamera {

struct CameraVehicleRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLastVehicleRotationRadians;
    // NOLINTEND
};

} // namespace VanillaCamera
