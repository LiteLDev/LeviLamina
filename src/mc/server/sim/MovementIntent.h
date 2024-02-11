#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
namespace sim { struct MoveInDirectionIntent; }
namespace sim { struct MoveToPositionIntent; }
namespace sim { struct NavigateToEntityIntent; }
namespace sim { struct NavigateToPositionsIntent; }
namespace sim { struct VoidMoveIntent; }
// clang-format on

namespace sim {

struct MovementIntent {
public:
    // prevent constructor by default
    MovementIntent& operator=(MovementIntent const&);
    MovementIntent(MovementIntent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MovementIntent@sim@@QEAA@XZ
    MCAPI MovementIntent();

    // symbol:
    // ??0MovementIntent@sim@@QEAA@V?$variant@UVoidMoveIntent@sim@@UMoveInDirectionIntent@2@UMoveToPositionIntent@2@UNavigateToPositionsIntent@2@UNavigateToEntityIntent@2@@std@@@Z
    MCAPI explicit MovementIntent(std::variant<
                                  struct sim::VoidMoveIntent,
                                  struct sim::MoveInDirectionIntent,
                                  struct sim::MoveToPositionIntent,
                                  struct sim::NavigateToPositionsIntent,
                                  struct sim::NavigateToEntityIntent>);

    // symbol: ?execute@MovementIntent@sim@@QEAA?AW4ExecutionResult@2@AEAVSimulatedPlayer@@@Z
    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer&);

    // symbol: ?finalize@MovementIntent@sim@@QEAAXAEAVSimulatedPlayer@@@Z
    MCAPI void finalize(class SimulatedPlayer&);

    // symbol: ?reset@MovementIntent@sim@@QEAAXXZ
    MCAPI void reset();

    // symbol: ??1MovementIntent@sim@@QEAA@XZ
    MCAPI ~MovementIntent();

    // NOLINTEND
};

}; // namespace sim
