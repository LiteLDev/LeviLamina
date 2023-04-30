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
     * @symbol ?_adjustFallDistance\@BlockMovementSlowdownMultiplierSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUBlockMovementSlowdownAppliedComponent\@\@AEAUFallDistanceComponent\@\@\@Z
     */
    MCAPI static void _adjustFallDistance(class StrictEntityContext const &, struct BlockMovementSlowdownAppliedComponent const &, struct FallDistanceComponent &);
    /**
     * @symbol ?_adjustFallDistanceWrapper\@BlockMovementSlowdownMultiplierSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUBlockMovementSlowdownAppliedComponent\@\@UFallDistanceComponent\@\@\@\@\@Z
     */
    MCAPI static void _adjustFallDistanceWrapper(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct BlockMovementSlowdownAppliedComponent const, struct FallDistanceComponent>);
    /**
     * @symbol ?_applySlowdownOnMove\@BlockMovementSlowdownMultiplierSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUBlockMovementSlowdownMultiplierComponent\@\@AEAUMoveRequestComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void _applySlowdownOnMove(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, struct MoveRequestComponent &, struct StateVectorComponent &);
    /**
     * @symbol ?_applySlowdownOnMoveWrapper\@BlockMovementSlowdownMultiplierSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UBlockMovementSlowdownMultiplierComponent\@\@UMoveRequestComponent\@\@UStateVectorComponent\@\@\@\@\@Z
     */
    MCAPI static void _applySlowdownOnMoveWrapper(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct BlockMovementSlowdownMultiplierComponent, struct MoveRequestComponent, struct StateVectorComponent>);
    /**
     * @symbol ?_immunePlayer\@BlockMovementSlowdownMultiplierSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUBlockMovementSlowdownMultiplierComponent\@\@AEBUAbilitiesComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@Z
     */
    MCAPI static void _immunePlayer(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, struct AbilitiesComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @symbol ?_immunePlayerWrapper\@BlockMovementSlowdownMultiplierSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UBlockMovementSlowdownMultiplierComponent\@\@U?$Include\@UBlockMovementSlowdownAppliedComponent\@\@\@\@$$CBUAbilitiesComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@Z
     */
    MCAPI static void _immunePlayerWrapper(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct BlockMovementSlowdownMultiplierComponent, struct Include<struct BlockMovementSlowdownAppliedComponent>, struct AbilitiesComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @symbol ?_immuneSlowdown\@BlockMovementSlowdownMultiplierSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUBlockMovementSlowdownMultiplierComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@Z
     */
    MCAPI static void _immuneSlowdown(class StrictEntityContext const &, struct BlockMovementSlowdownMultiplierComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @symbol ?_immuneWitherBossWrapper\@BlockMovementSlowdownMultiplierSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UBlockMovementSlowdownMultiplierComponent\@\@U?$Include\@V?$FlagComponent\@UWitherBossFlag\@\@\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@Z
     */
    MCAPI static void _immuneWitherBossWrapper(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct BlockMovementSlowdownMultiplierComponent, struct Include<class FlagComponent<struct WitherBossFlag>, struct BlockMovementSlowdownAppliedComponent>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @symbol ?createAdjustFallDistanceSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAdjustFallDistanceSystem();
    /**
     * @symbol ?createApplySlowdownOnMoveSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createApplySlowdownOnMoveSystem();
    /**
     * @symbol ?createCleanupSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol ?createImmunePlayerSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmunePlayerSystem();
    /**
     * @symbol ?createImmuneSpiderSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmuneSpiderSystem();
    /**
     * @symbol ?createImmuneWitherBossSystem\@BlockMovementSlowdownMultiplierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createImmuneWitherBossSystem();

};
