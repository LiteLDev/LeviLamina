#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

namespace Util::Agent {

struct SimulatedMoveResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> xzResult;
    ::ll::TypedStorage<4, 4, float>  yResult;
    ::ll::TypedStorage<1, 1, bool>   isReachable;
    // NOLINTEND
};

} // namespace Util::Agent
