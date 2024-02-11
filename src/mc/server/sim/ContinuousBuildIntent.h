#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SimulatedPlayer;
// clang-format on

namespace sim {

class ContinuousBuildIntent {
public:
    // prevent constructor by default
    ContinuousBuildIntent& operator=(ContinuousBuildIntent const&);
    ContinuousBuildIntent(ContinuousBuildIntent const&);
    ContinuousBuildIntent();

public:
    // NOLINTBEGIN
    // symbol: ?execute@ContinuousBuildIntent@sim@@QEAA?AW4ExecutionResult@2@AEAVSimulatedPlayer@@AEAVBlockSource@@@Z
    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer&, class BlockSource&);

    // NOLINTEND
};

}; // namespace sim
