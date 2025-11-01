#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

struct ContinuousLookAtPositionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mPosition;
    ::ll::TypedStorage<1, 1, bool> mStopOnMove;
    // NOLINTEND

};

}
