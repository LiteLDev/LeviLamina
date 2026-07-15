#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Vec3;
namespace Util::Agent { struct SimulatedMoveResult; }
// clang-format on

namespace Util::Agent {
// functions
// NOLINTBEGIN
MCAPI ::Vec3 getNextPosFromDirection(::Vec3 const& startPosition, float bodyRotation, ::AgentComponents::Direction dir);

MCAPI ::Util::Agent::SimulatedMoveResult
simulateMove(::EntityContext& entity, ::AgentComponents::Direction dir, ::Vec3 destination);
// NOLINTEND

} // namespace Util::Agent
