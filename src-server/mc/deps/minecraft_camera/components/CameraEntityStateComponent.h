#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraEntityStateComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk70a34b;
    ::ll::UntypedStorage<1, 1> mUnkac0c0f;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraEntityStateComponent& operator=(CameraEntityStateComponent const&);
    CameraEntityStateComponent(CameraEntityStateComponent const&);
    CameraEntityStateComponent();
};

} // namespace MinecraftCamera
