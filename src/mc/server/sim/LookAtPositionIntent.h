#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct LookAtPositionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mPosition;
    ::ll::TypedStorage<4, 4, int>          mCountdown;
    // NOLINTEND
};

} // namespace sim
