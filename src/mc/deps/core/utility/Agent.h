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
// symbol: ?COMMAND_INTERVAL@Agent@Util@@3MB
MCAPI extern float const COMMAND_INTERVAL;

// symbol: ?MOVE_EPSILON@Agent@Util@@3MB
MCAPI extern float const MOVE_EPSILON;

// symbol: ?getNextBlock@Agent@Util@@YA?AUBlockQueryResult@AgentComponents@@AEAVBlockSource@@VVec3@@MW4Direction@4@@Z
MCAPI struct AgentComponents::BlockQueryResult
getNextBlock(class BlockSource& source, class Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

// symbol:
// ?getNextBlockSweep@Agent@Util@@YA?AUBlockQueryResult@AgentComponents@@AEAVBlockSource@@VVec3@@MW4Direction@4@@Z
MCAPI struct AgentComponents::BlockQueryResult
getNextBlockSweep(class BlockSource& source, class Vec3 curPos, float bodyRot, ::AgentComponents::Direction direction);

// symbol:
// ?getNextBlockUnfiltered@Agent@Util@@YA?AUBlockQueryResult@AgentComponents@@AEAVBlockSource@@VVec3@@MW4Direction@4@@Z
MCAPI struct AgentComponents::BlockQueryResult
getNextBlockUnfiltered(class BlockSource&, class Vec3, float, ::AgentComponents::Direction);

// symbol:
// ?getNextBlockUnfilteredSweep@Agent@Util@@YA?AUBlockQueryResult@AgentComponents@@AEAVBlockSource@@VVec3@@MW4Direction@4@@Z
MCAPI struct AgentComponents::BlockQueryResult
getNextBlockUnfilteredSweep(class BlockSource&, class Vec3, float, ::AgentComponents::Direction);

// symbol: ?getNextPosFromDirection@Agent@Util@@YA?AVVec3@@AEBV3@MW4Direction@AgentComponents@@@Z
MCAPI class Vec3 getNextPosFromDirection(class Vec3 const& startPosition, float, ::AgentComponents::Direction dir);

// symbol:
// ?simulateMove@Agent@Util@@YA?AUSimulatedMoveResult@12@AEAVEntityContext@@W4Direction@AgentComponents@@VVec3@@@Z
MCAPI struct Util::Agent::SimulatedMoveResult
simulateMove(class EntityContext& context, ::AgentComponents::Direction dir, class Vec3 destination);
// NOLINTEND

}; // namespace Util::Agent
