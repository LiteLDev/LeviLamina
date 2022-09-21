/**
 * @file  MC/BlockMovementSlowdownMultiplierSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol ?_adjustFallDistance@BlockMovementSlowdownMultiplierSystem@@SAXAEBVStrictEntityContext@@AEBUBlockMovementSlowdownAppliedComponent@@AEAUFallDistanceComponent@@@Z
     */
    MCAPI static void _adjustFallDistance(class StrictEntityContext const &, struct BlockMovementSlowdownAppliedComponent const &, struct FallDistanceComponent &);
    /**
     * @symbol ?_applySlowdownOnMove@BlockMovementSlowdownMultiplierSystem@@SAXAEBVStrictEntityContext@@AEAUBlockMovementSlowdownMultiplierComponent@@AEAUMoveRequestComponent@@AEAUStateVectorComponent@@@Z
     */
    MCAPI static void _applySlowdownOnMove(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, struct MoveRequestComponent &, struct StateVectorComponent &);
    /**
     * @symbol ?_immunePlayer@BlockMovementSlowdownMultiplierSystem@@SAXAEBVStrictEntityContext@@AEAUBlockMovementSlowdownMultiplierComponent@@AEBUAbilitiesComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UBlockMovementSlowdownAppliedComponent@@@@@Z
     */
    MCAPI static void _immunePlayer(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, struct AbilitiesComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @symbol ?_immuneSlowdown@BlockMovementSlowdownMultiplierSystem@@SAXAEBVStrictEntityContext@@AEAUBlockMovementSlowdownMultiplierComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UBlockMovementSlowdownAppliedComponent@@@@@Z
     */
    MCAPI static void _immuneSlowdown(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @hash   419246384
     * @symbol ?createAdjustFallDistanceSystem@BlockMovementSlowdownMultiplierSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAdjustFallDistanceSystem();
    /**
     * @symbol ?createApplySlowdownOnMoveSystem@BlockMovementSlowdownMultiplierSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createApplySlowdownOnMoveSystem();
    /**
     * @hash   -2123659586
     * @symbol ?createCleanupSystem@BlockMovementSlowdownMultiplierSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @hash   700852416
     * @symbol ?createImmunePlayerSystem@BlockMovementSlowdownMultiplierSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmunePlayerSystem();
    /**
     * @hash   874899088
     * @symbol ?createImmuneSpiderSystem@BlockMovementSlowdownMultiplierSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmuneSpiderSystem();
    /**
     * @hash   146145408
     * @symbol ?createImmuneWitherBossSystem@BlockMovementSlowdownMultiplierSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmuneWitherBossSystem();

};