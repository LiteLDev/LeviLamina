#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
// clang-format on

namespace BlockMovementSlowdownMultiplierSystem {
/**
 * @symbol ?createAdjustFallDistanceSystem\@BlockMovementSlowdownMultiplierSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
 */
MCAPI struct TickingSystemWithInfo createAdjustFallDistanceSystem(); // NOLINT
/**
 * @symbol ?createApplySlowdownOnMoveSystem\@BlockMovementSlowdownMultiplierSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
 */
MCAPI struct TickingSystemWithInfo createApplySlowdownOnMoveSystem(); // NOLINT
/**
 * @symbol ?createCleanupSystem\@BlockMovementSlowdownMultiplierSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
 */
MCAPI struct TickingSystemWithInfo createCleanupSystem(); // NOLINT
/**
 * @symbol ?createImmunePlayerSystem\@BlockMovementSlowdownMultiplierSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
 */
MCAPI struct TickingSystemWithInfo createImmunePlayerSystem(); // NOLINT
/**
 * @symbol ?createImmuneSpiderSystem\@BlockMovementSlowdownMultiplierSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
 */
MCAPI struct TickingSystemWithInfo createImmuneSpiderSystem(); // NOLINT
/**
 * @symbol ?createImmuneWitherBossSystem\@BlockMovementSlowdownMultiplierSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
 */
MCAPI struct TickingSystemWithInfo createImmuneWitherBossSystem(); // NOLINT
/**
 * @symbol
 * ?tickAdjustFallDistance\@BlockMovementSlowdownMultiplierSystem\@\@YAXAEBUBlockMovementSlowdownAppliedComponent\@\@AEAUFallDistanceComponent\@\@\@Z
 */
MCAPI void
tickAdjustFallDistance(struct BlockMovementSlowdownAppliedComponent const&, struct FallDistanceComponent&); // NOLINT
/**
 * @symbol
 * ?tickApplySlowdownOnMove\@BlockMovementSlowdownMultiplierSystem\@\@YAXAEAUBlockMovementSlowdownMultiplierComponent\@\@AEAUMoveRequestComponent\@\@AEAUStateVectorComponent\@\@\@Z
 */
MCAPI void
tickApplySlowdownOnMove(struct BlockMovementSlowdownMultiplierComponent&, struct MoveRequestComponent&, struct StateVectorComponent&); // NOLINT
/**
 * @symbol
 * ?tickImmunePlayer\@BlockMovementSlowdownMultiplierSystem\@\@YAXAEBVStrictEntityContext\@\@AEAUBlockMovementSlowdownMultiplierComponent\@\@AEBUAbilitiesComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@Z
 */
MCAPI void
tickImmunePlayer(class StrictEntityContext const&, struct BlockMovementSlowdownMultiplierComponent&, struct AbilitiesComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>); // NOLINT
/**
 * @symbol
 * ?tickImmuneSlowdown\@BlockMovementSlowdownMultiplierSystem\@\@YAXAEBVStrictEntityContext\@\@AEAUBlockMovementSlowdownMultiplierComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@Z
 */
MCAPI void
tickImmuneSlowdown(class StrictEntityContext const&, struct BlockMovementSlowdownMultiplierComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>); // NOLINT

}; // namespace BlockMovementSlowdownMultiplierSystem
