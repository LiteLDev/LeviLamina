#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobBodyRotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mYBodyRot;
    ::ll::TypedStorage<4, 4, float> mYBodyRotO;
    // NOLINTEND

};
