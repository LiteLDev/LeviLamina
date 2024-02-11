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

struct BuildIntent {
public:
    // prevent constructor by default
    BuildIntent& operator=(BuildIntent const&);
    BuildIntent(BuildIntent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BuildIntent@sim@@QEAA@XZ
    MCAPI BuildIntent();

    // symbol: ?execute@BuildIntent@sim@@QEAA?AW4ExecutionResult@2@AEAVSimulatedPlayer@@AEAVBlockSource@@@Z
    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer&, class BlockSource&);

    // symbol: ?finalize@BuildIntent@sim@@QEAAXAEAVSimulatedPlayer@@@Z
    MCAPI void finalize(class SimulatedPlayer&);

    // symbol: ?reset@BuildIntent@sim@@QEAAXXZ
    MCAPI void reset();

    // NOLINTEND
};

}; // namespace sim
