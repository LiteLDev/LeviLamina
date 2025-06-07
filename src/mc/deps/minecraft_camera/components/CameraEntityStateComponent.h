#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraEntityStateComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsInWall;
    ::ll::TypedStorage<1, 1, bool> mIsAlive;
    // NOLINTEND
};
