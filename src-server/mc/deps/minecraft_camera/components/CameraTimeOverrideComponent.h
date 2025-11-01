#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

class CameraTimeOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5053a0;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraTimeOverrideComponent& operator=(CameraTimeOverrideComponent const&);
    CameraTimeOverrideComponent(CameraTimeOverrideComponent const&);
    CameraTimeOverrideComponent();
};

} // namespace MinecraftCamera
