#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

class CameraTimeOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<float()>> mGetDeltaTimeOverride;
    // NOLINTEND
};

} // namespace MinecraftCamera
