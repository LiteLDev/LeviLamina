/**
 * @file  LiquidPhysicsSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidPhysicsSystem.
 *
 */
class LiquidPhysicsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDPHYSICSSYSTEM
public:
    class LiquidPhysicsSystem& operator=(class LiquidPhysicsSystem const &) = delete;
    LiquidPhysicsSystem(class LiquidPhysicsSystem const &) = delete;
    LiquidPhysicsSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_liquidBlockFetch\@LiquidPhysicsSystem\@\@SAXAEBVStrictEntityContext\@\@AEAUUpdateWaterStateRequestComponent\@\@AEBUAABBShapeComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UItemActorFlag\@\@\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void _liquidBlockFetch(class StrictEntityContext const &, struct UpdateWaterStateRequestComponent &, struct AABBShapeComponent const &, class Optional<class FlagComponent<struct ItemActorFlag> const>, class IConstBlockSource const &);
    /**
     * @symbol  ?_tickLiquidBlocksFetch\@LiquidPhysicsSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UUpdateWaterStateRequestComponent\@\@$$CBUAABBShapeComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UItemActorFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUDimensionTypeComponent\@\@\@\@V?$OptionalGlobalT\@$$CBULocalConstBlockSourceFactoryComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
     */
    MCAPI static void _tickLiquidBlocksFetch(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct UpdateWaterStateRequestComponent, struct AABBShapeComponent const, class Optional<class FlagComponent<struct ItemActorFlag> const>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct DimensionTypeComponent const>, class OptionalGlobalT<struct LocalConstBlockSourceFactoryComponent const, class EntityRegistryBase>);
    /**
     * @symbol  ?applyPhysics\@LiquidPhysicsSystem\@\@SA_NW4MaterialType\@\@AEBVIConstBlockSource\@\@AEBVAABB\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static bool applyPhysics(enum class MaterialType, class IConstBlockSource const &, class AABB const &, struct StateVectorComponent &);
    /**
     * @symbol  ?createApplyFlowSystem\@LiquidPhysicsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createApplyFlowSystem();
    /**
     * @symbol  ?createFilterSystem\@LiquidPhysicsSystem\@\@SA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createFilterSystem(bool);
    /**
     * @symbol  ?createLiquidFetchingSystem\@LiquidPhysicsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLiquidFetchingSystem();

};