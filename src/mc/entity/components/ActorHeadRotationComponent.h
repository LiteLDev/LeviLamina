#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHeadRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mYHeadRot;
    ::ll::TypedStorage<4, 4, float> mYHeadRotO;
    // NOLINTEND
};
