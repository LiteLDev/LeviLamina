#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraAdjustedPositionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk2eb99a;
    ::ll::UntypedStorage<4, 12> mUnk4efdba;
    ::ll::UntypedStorage<4, 12> mUnk4d3426;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAdjustedPositionComponent& operator=(CameraAdjustedPositionComponent const&);
    CameraAdjustedPositionComponent(CameraAdjustedPositionComponent const&);
    CameraAdjustedPositionComponent();
};

} // namespace MinecraftCamera
