/**
 * @file  BlockMovementSlowdownMultiplierSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockMovementSlowdownMultiplierSystem.
 *
 */
class BlockMovementSlowdownMultiplierSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMOVEMENTSLOWDOWNMULTIPLIERSYSTEM
public:
    class BlockMovementSlowdownMultiplierSystem& operator=(class BlockMovementSlowdownMultiplierSystem const &) = delete;
    BlockMovementSlowdownMultiplierSystem(class BlockMovementSlowdownMultiplierSystem const &) = delete;
    BlockMovementSlowdownMultiplierSystem() = delete;
#endif

public:
    /**
     * @hash   -1775551524
     * @symbol  ?_adjustFallDistance\@BlockMovementSlowdownMultiplierSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUBlockMovementSlowdownAppliedComponent\@\@AEAUFallDistanceComponent\@\@\@Z
     */
    MCAPI static void _adjustFallDistance(class StrictEntityContext const &, struct BlockMovementSlowdownAppliedComponent const &, struct FallDistanceComponent &);
    /**
     * @hash   1025554549
     * @symbol  ?_applySlowdownOnMove\@BlockMovementSlowdownMultiplierSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUBlockMovementSlowdownMultiplierComponent\@\@AEAUMoveRequestComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void _applySlowdownOnMove(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, struct MoveRequestComponent &, struct StateVectorComponent &);
    /**
     * @hash   345188420
     * @symbol  ?_immunePlayer\@BlockMovementSlowdownMultiplierSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUBlockMovementSlowdownMultiplierComponent\@\@AEBUAbilitiesComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@Z
     */
    MCAPI static void _immunePlayer(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, struct AbilitiesComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @hash   193954785
     * @symbol  ?_immuneSlowdown\@BlockMovementSlowdownMultiplierSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUBlockMovementSlowdownMultiplierComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@Z
     */
    MCAPI static void _immuneSlowdown(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @hash   608709456
     * @symbol  ?createAdjustFallDistanceSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAdjustFallDistanceSystem();
    /**
     * @hash   -1107167938
     * @symbol  ?createApplySlowdownOnMoveSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createApplySlowdownOnMoveSystem();
    /**
     * @hash   -1934119634
     * @symbol  ?createCleanupSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @hash   890438496
     * @symbol  ?createImmunePlayerSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmunePlayerSystem();
    /**
     * @hash   1064485168
     * @symbol  ?createImmuneSpiderSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmuneSpiderSystem();
    /**
     * @hash   335731488
     * @symbol  ?createImmuneWitherBossSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmuneWitherBossSystem();

};