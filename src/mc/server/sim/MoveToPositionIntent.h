#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct MoveToPositionIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3> mTarget;
    ::ll::TypedStorage<1, 1, bool>         mLookAtTarget;
    ::ll::TypedStorage<4, 4, float>        mSpeed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player);
    // NOLINTEND
};

} // namespace sim
