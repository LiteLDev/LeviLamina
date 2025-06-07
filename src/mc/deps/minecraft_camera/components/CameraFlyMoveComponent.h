#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraFlyMoveComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSpeed;
    ::ll::TypedStorage<4, 4, float> mSprintSpeed;
    // NOLINTEND
};
