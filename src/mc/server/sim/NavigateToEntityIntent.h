#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct NavigateToEntityIntent {
public:
    // prevent constructor by default
    NavigateToEntityIntent& operator=(NavigateToEntityIntent const&);
    NavigateToEntityIntent(NavigateToEntityIntent const&);
    NavigateToEntityIntent();

public:
    // NOLINTBEGIN
    // symbol: ?execute@NavigateToEntityIntent@sim@@QEAA?AW4ExecutionResult@2@AEAVSimulatedPlayer@@@Z
    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer&);

    // NOLINTEND
};

}; // namespace sim
