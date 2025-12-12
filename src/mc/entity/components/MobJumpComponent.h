#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct MobJumpComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mJumpStartPos;
    ::ll::TypedStorage<1, 1, bool>    mJumpVelRedux;
    ::ll::TypedStorage<4, 4, int>     mNoJumpDelay;
    // NOLINTEND
};
