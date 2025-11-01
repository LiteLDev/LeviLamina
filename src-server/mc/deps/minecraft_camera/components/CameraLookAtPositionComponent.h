#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraLookAtPositionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk540e66;
    ::ll::UntypedStorage<4, 8> mUnk52e5ea;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraLookAtPositionComponent& operator=(CameraLookAtPositionComponent const&);
    CameraLookAtPositionComponent(CameraLookAtPositionComponent const&);
    CameraLookAtPositionComponent();

};

}
