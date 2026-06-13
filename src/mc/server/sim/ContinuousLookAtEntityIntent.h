#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct ContinuousLookAtEntityIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntity;
    ::ll::TypedStorage<1, 1, bool>             mStopOnMove;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player);
    // NOLINTEND
};

} // namespace sim
