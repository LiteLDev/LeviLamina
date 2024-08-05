#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class MovementIntent {
public:
    // prevent constructor by default
    MovementIntent& operator=(MovementIntent const&);
    MovementIntent(MovementIntent const&);
    MovementIntent();

public:
    // NOLINTBEGIN
    MCAPI explicit MovementIntent(std::variant<
                                  struct sim::VoidMoveIntent,
                                  struct sim::MoveInDirectionIntent,
                                  struct sim::MoveToPositionIntent,
                                  struct sim::NavigateToPositionsIntent,
                                  struct sim::NavigateToEntityIntent>);

    MCAPI void finalize(class SimulatedPlayer&);

    MCAPI ~MovementIntent();

    // NOLINTEND
};

}; // namespace sim
