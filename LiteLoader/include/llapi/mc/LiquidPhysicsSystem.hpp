/**
 * @file  LiquidPhysicsSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace LiquidPhysicsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_liquidBlockFetch\@LiquidPhysicsSystem\@\@YAXAEBVStrictEntityContext\@\@AEAUStateVectorComponent\@\@AEAUUpdateWaterStateRequestComponent\@\@AEBUAABBShapeComponent\@\@AEBUSubBBsComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UItemActorFlag\@\@\@\@\@\@AEAV?$vector\@ULiquidBlockEntry\@\@V?$allocator\@ULiquidBlockEntry\@\@\@std\@\@\@std\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI void _liquidBlockFetch(class StrictEntityContext const &, struct StateVectorComponent &, struct UpdateWaterStateRequestComponent &, struct AABBShapeComponent const &, struct SubBBsComponent const &, class Optional<class FlagComponent<struct ItemActorFlag> const>, std::vector<struct LiquidBlockEntry> &, class IConstBlockSource const &);
    /**
     * @symbol ?applyPhysics\@LiquidPhysicsSystem\@\@YA_NW4MaterialType\@\@AEBVIConstBlockSource\@\@AEBVAABB\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI bool applyPhysics(enum class MaterialType, class IConstBlockSource const &, class AABB const &, struct StateVectorComponent &);
    /**
     * @symbol ?createFilterSystem\@LiquidPhysicsSystem\@\@YA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI struct TickingSystemWithInfo createFilterSystem(bool);
    /**
     * @symbol ?createLiquidFetchingSystem\@LiquidPhysicsSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI struct TickingSystemWithInfo createLiquidFetchingSystem();

};