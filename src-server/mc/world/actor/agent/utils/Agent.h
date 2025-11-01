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
MCNAPI ::AgentComponents::BlockQueryResult getNextBlock(::BlockSource& source, ::Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

MCNAPI ::AgentComponents::BlockQueryResult getNextBlockSweep(::BlockSource& source, ::Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

MCNAPI ::AgentComponents::BlockQueryResult getNextBlockUnfiltered(::BlockSource& source, ::Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

MCNAPI ::AgentComponents::BlockQueryResult getNextBlockUnfilteredSweep(::BlockSource& source, ::Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

MCNAPI ::Vec3 getNextPosFromDirection(::Vec3 const& startPosition, float bodyRotation, ::AgentComponents::Direction dir);

MCNAPI ::Util::Agent::SimulatedMoveResult simulateMove(::EntityContext& entity, ::AgentComponents::Direction dir, ::Vec3 destination);

MCNAPI void testForCollidableMobs(::Actor const& actor, ::BlockSource& region, ::AABB const& intersectTestBox, ::std::vector<::AABB>& collisionAABBs);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI float const& COMMAND_INTERVAL();

MCNAPI float const& MOVE_EPSILON();
// NOLINTEND

}
