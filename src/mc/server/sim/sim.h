#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ExecutionResult.h"
#include "mc/external/glm/vec.h"
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
// symbol: ?lookAt@sim@@YA?AULookAtIntent@1@AEAVSimulatedPlayer@@AEAVEntityContext@@W4LookDuration@1@@Z
MCAPI struct sim::LookAtIntent lookAt(class SimulatedPlayer&, class EntityContext&, ::sim::LookDuration);

// symbol: ?lookAt@sim@@YA?AULookAtIntent@1@AEAVSimulatedPlayer@@U?$vec@$02M$0A@@glm@@W4LookDuration@1@@Z
MCAPI struct sim::LookAtIntent lookAt(class SimulatedPlayer&, struct glm::vec<3, float, 0>, ::sim::LookDuration);

// symbol: ?startBuild@sim@@YA?AUBuildIntent@1@AEAVSimulatedPlayer@@AEAVBlockSource@@H@Z
MCAPI struct sim::BuildIntent startBuild(class SimulatedPlayer&, class BlockSource&, int);
// NOLINTEND

}; // namespace sim
