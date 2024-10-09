#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"
#include "mc/server/sim/LookDuration.h"

// auto generated forward declare list
// clang-format off
namespace sim { struct BuildIntent; }
namespace sim { struct ContinuousLookAtEntityIntent; }
namespace sim { struct ContinuousLookAtPositionIntent; }
namespace sim { struct LookAtEntityIntent; }
namespace sim { struct LookAtIntent; }
namespace sim { struct LookAtPositionIntent; }
namespace sim { struct MoveInDirectionIntent; }
namespace sim { struct MoveToPositionIntent; }
namespace sim { struct NavigateToEntityIntent; }
namespace sim { struct NavigateToPositionsIntent; }
namespace sim { struct VoidLookAtIntent; }
namespace sim { struct VoidMoveIntent; }
// clang-format on

namespace sim {
// NOLINTBEGIN
MCAPI struct sim::LookAtIntent
lookAt(class SimulatedPlayer& player, class EntityContext& entity, ::sim::LookDuration duration);

MCAPI struct sim::LookAtIntent lookAt(class SimulatedPlayer& player, glm::vec3 position, ::sim::LookDuration duration);

MCAPI struct sim::BuildIntent startBuild(class SimulatedPlayer& player, class BlockSource& region, int slot);
// NOLINTEND

}; // namespace sim
