#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ExecutionResult.h"

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
    // symbol: ?execute@MoveToPositionIntent@sim@@QEAA?AW4ExecutionResult@2@AEAVSimulatedPlayer@@@Z
    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer&);

    // NOLINTEND
};

}; // namespace sim
