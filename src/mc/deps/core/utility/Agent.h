#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/agent/Direction.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class EntityContext;
class Vec3;
namespace AgentComponents { struct BlockQueryResult; }
namespace Util::Agent { struct SimulatedMoveResult; }
// clang-format on

namespace Util::Agent {
// NOLINTBEGIN
MCAPI extern float const COMMAND_INTERVAL;

MCAPI extern float const MOVE_EPSILON;

MCAPI struct AgentComponents::BlockQueryResult
getNextBlock(class BlockSource& source, class Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

MCAPI struct AgentComponents::BlockQueryResult
getNextBlockSweep(class BlockSource& source, class Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

MCAPI struct AgentComponents::BlockQueryResult
getNextBlockUnfiltered(class BlockSource&, class Vec3, float, ::AgentComponents::Direction);

MCAPI struct AgentComponents::BlockQueryResult
getNextBlockUnfilteredSweep(class BlockSource&, class Vec3, float, ::AgentComponents::Direction);

MCAPI class Vec3 getNextPosFromDirection(class Vec3 const& startPosition, float, ::AgentComponents::Direction dir);

MCAPI struct Util::Agent::SimulatedMoveResult
simulateMove(class EntityContext& context, ::AgentComponents::Direction dir, class Vec3 destination);
// NOLINTEND

}; // namespace Util::Agent
