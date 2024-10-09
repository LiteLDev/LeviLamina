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
    // prevent constructor by default
    MoveToPositionIntent& operator=(MoveToPositionIntent const&);
    MoveToPositionIntent(MoveToPositionIntent const&);
    MoveToPositionIntent();

public:
    // NOLINTBEGIN
    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer& player);

    // NOLINTEND
};

}; // namespace sim
