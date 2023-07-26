#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { enum class Direction; }
namespace AgentComponents { struct BlockQueryResult; }
namespace Util::Agent { struct SimulatedMoveResult; }
// clang-format on

namespace Util::Agent {
/**
 * @symbol ?COMMAND_INTERVAL\@Agent\@Util\@\@3MB
 */
MCAPI extern float const COMMAND_INTERVAL; // NOLINT
/**
 * @symbol ?MOVE_EPSILON\@Agent\@Util\@\@3MB
 */
MCAPI extern float const MOVE_EPSILON; // NOLINT
/**
 * @symbol
 * ?getNextBlock\@Agent\@Util\@\@YA?AUBlockQueryResult\@AgentComponents\@\@AEAVBlockSource\@\@VVec3\@\@MW4Direction\@4\@\@Z
 */
MCAPI struct AgentComponents::BlockQueryResult
getNextBlock(class BlockSource&, class Vec3, float, enum class AgentComponents::Direction); // NOLINT
/**
 * @symbol
 * ?getNextBlockSweep\@Agent\@Util\@\@YA?AUBlockQueryResult\@AgentComponents\@\@AEAVBlockSource\@\@VVec3\@\@MW4Direction\@4\@\@Z
 */
MCAPI struct AgentComponents::BlockQueryResult
getNextBlockSweep(class BlockSource&, class Vec3, float, enum class AgentComponents::Direction); // NOLINT
/**
 * @symbol
 * ?getNextBlockUnfiltered\@Agent\@Util\@\@YA?AUBlockQueryResult\@AgentComponents\@\@AEAVBlockSource\@\@VVec3\@\@MW4Direction\@4\@\@Z
 */
MCAPI struct AgentComponents::BlockQueryResult
getNextBlockUnfiltered(class BlockSource&, class Vec3, float, enum class AgentComponents::Direction); // NOLINT
/**
 * @symbol
 * ?getNextBlockUnfilteredSweep\@Agent\@Util\@\@YA?AUBlockQueryResult\@AgentComponents\@\@AEAVBlockSource\@\@VVec3\@\@MW4Direction\@4\@\@Z
 */
MCAPI struct AgentComponents::BlockQueryResult
getNextBlockUnfilteredSweep(class BlockSource&, class Vec3, float, enum class AgentComponents::Direction); // NOLINT
/**
 * @symbol ?getNextPosFromDirection\@Agent\@Util\@\@YA?AVVec3\@\@AEBV3\@MW4Direction\@AgentComponents\@\@\@Z
 */
MCAPI class Vec3 getNextPosFromDirection(class Vec3 const&, float, enum class AgentComponents::Direction); // NOLINT
/**
 * @symbol
 * ?simulateMove\@Agent\@Util\@\@YA?AUSimulatedMoveResult\@12\@AEAVEntityContext\@\@W4Direction\@AgentComponents\@\@VVec3\@\@\@Z
 */
MCAPI struct Util::Agent::SimulatedMoveResult
simulateMove(class EntityContext&, enum class AgentComponents::Direction, class Vec3); // NOLINT

}; // namespace Util::Agent
