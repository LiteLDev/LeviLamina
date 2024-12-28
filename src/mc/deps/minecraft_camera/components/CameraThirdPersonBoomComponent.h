#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraThirdPersonBoomComponent {
public:
    // CameraThirdPersonBoomComponent inner types define
    enum class RotationSpace : uchar {
        Local = 0,
        World = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc69ddf;
    ::ll::UntypedStorage<4, 8> mUnk4451f4;
    ::ll::UntypedStorage<1, 1> mUnk3636dd;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraThirdPersonBoomComponent& operator=(CameraThirdPersonBoomComponent const&);
    CameraThirdPersonBoomComponent(CameraThirdPersonBoomComponent const&);
    CameraThirdPersonBoomComponent();
};
