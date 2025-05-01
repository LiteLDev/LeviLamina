#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct NavigateToPositionsIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                       mSpeed;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec3>> mTargets;
    ::ll::TypedStorage<8, 8, uint64>                      mNextTarget;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player);

    MCNAPI ~NavigateToPositionsIntent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace sim
