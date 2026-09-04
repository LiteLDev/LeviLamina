#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct MoveToPositionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mTarget;
    ::ll::TypedStorage<1, 1, bool>         mLookAtTarget;
    ::ll::TypedStorage<4, 4, float>        mSpeed;
    // NOLINTEND
};

} // namespace sim
