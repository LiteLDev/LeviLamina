#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/RotationSpace.h"

namespace MinecraftCamera {

struct CameraThirdPersonBoomComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk54ed67;
    ::ll::UntypedStorage<4, 8> mUnkf4fdec;
    ::ll::UntypedStorage<1, 1> mUnk93a0ed;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraThirdPersonBoomComponent& operator=(CameraThirdPersonBoomComponent const&);
    CameraThirdPersonBoomComponent(CameraThirdPersonBoomComponent const&);
    CameraThirdPersonBoomComponent();
};

} // namespace MinecraftCamera
