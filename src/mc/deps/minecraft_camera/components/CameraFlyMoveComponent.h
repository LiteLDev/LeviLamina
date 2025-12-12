#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraFlyMoveComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk89f6dc;
    ::ll::UntypedStorage<4, 4> mUnkc6e2e9;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraFlyMoveComponent& operator=(CameraFlyMoveComponent const&);
    CameraFlyMoveComponent(CameraFlyMoveComponent const&);
    CameraFlyMoveComponent();
};

} // namespace MinecraftCamera
