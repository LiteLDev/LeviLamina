#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/LookDuration.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class EntityContext;
class SimulatedPlayer;
namespace sim { struct BuildIntent; }
namespace sim { struct LookAtIntent; }
// clang-format on

namespace sim {
// functions
// NOLINTBEGIN
MCAPI ::sim::LookAtIntent lookAt(::SimulatedPlayer& player, ::EntityContext& entity, ::sim::LookDuration duration);

MCAPI ::sim::LookAtIntent lookAt(::SimulatedPlayer& player, ::glm::vec3 position, ::sim::LookDuration duration);

MCAPI ::sim::BuildIntent startBuild(::SimulatedPlayer& player, ::BlockSource& region, int slot);
// NOLINTEND

} // namespace sim
