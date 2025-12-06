#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockSource;
class EntityContext;
class Vec3;
namespace AgentComponents { struct BlockQueryResult; }
namespace Util::Agent { struct SimulatedMoveResult; }
// clang-format on

namespace Util::Agent {
// functions
// NOLINTBEGIN
MCAPI ::AgentComponents::BlockQueryResult
getNextBlock(::BlockSource& source, ::Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

MCAPI ::AgentComponents::BlockQueryResult
getNextBlockSweep(::BlockSource& source, ::Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

MCAPI ::AgentComponents::BlockQueryResult
getNextBlockUnfiltered(::BlockSource& source, ::Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

MCAPI ::AgentComponents::BlockQueryResult getNextBlockUnfilteredSweep(
    ::BlockSource&               source,
    ::Vec3                       curPos,
    float                        bodyRot,
    ::AgentComponents::Direction direction
);

MCAPI ::Vec3 getNextPosFromDirection(::Vec3 const& startPosition, float bodyRotation, ::AgentComponents::Direction dir);

MCAPI ::Util::Agent::SimulatedMoveResult
simulateMove(::EntityContext& entity, ::AgentComponents::Direction dir, ::Vec3 destination);

MCAPI void testForCollidableMobs(
    ::Actor const&         actor,
    ::BlockSource&         region,
    ::AABB const&          intersectTestBox,
    ::std::vector<::AABB>& collisionAABBs
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI float const& COMMAND_INTERVAL();

MCAPI float const& MOVE_EPSILON();
// NOLINTEND

} // namespace Util::Agent
