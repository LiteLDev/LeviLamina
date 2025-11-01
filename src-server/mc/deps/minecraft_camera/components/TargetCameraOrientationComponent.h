#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct TargetCameraOrientationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkf090ff;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetCameraOrientationComponent& operator=(TargetCameraOrientationComponent const&);
    TargetCameraOrientationComponent(TargetCameraOrientationComponent const&);
    TargetCameraOrientationComponent();

};

}
