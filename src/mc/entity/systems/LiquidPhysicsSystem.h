#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0, typename T1> class OptionalGlobalT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace LiquidPhysicsSystem {
// NOLINTBEGIN
/**
 * @symbol
 * ?_liquidBlockFetch\@LiquidPhysicsSystem\@\@YAXAEBVStrictEntityContext\@\@AEAUStateVectorComponent\@\@AEAUUpdateWaterStateRequestComponent\@\@AEBUAABBShapeComponent\@\@AEBUSubBBsComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UItemActorFlag\@\@\@\@\@\@AEAV?$vector\@ULiquidBlockEntry\@\@V?$allocator\@ULiquidBlockEntry\@\@\@std\@\@\@std\@\@AEBVIConstBlockSource\@\@\@Z
 */
MCAPI void _liquidBlockFetch(class StrictEntityContext const&, struct StateVectorComponent&, struct UpdateWaterStateRequestComponent&, struct AABBShapeComponent const&, struct SubBBsComponent const&, class Optional<class FlagComponent<struct ItemActorFlag> const>, std::vector<struct LiquidBlockEntry>&, class IConstBlockSource const&);
/**
 * @symbol
 * ?_markForLiquidFlow\@LiquidPhysicsSystem\@\@YAXAEAUUpdateWaterStateRequestComponent\@\@AEBV?$Optional\@$$CBUAbilitiesComponent\@\@\@\@\@Z
 */
MCAPI void
_markForLiquidFlow(struct UpdateWaterStateRequestComponent&, class Optional<struct AbilitiesComponent const> const&);
/**
 * @symbol
 * ?_tickLiquidBlocksFetch\@LiquidPhysicsSystem\@\@YAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UStateVectorComponent\@\@UUpdateWaterStateRequestComponent\@\@$$CBUAABBShapeComponent\@\@$$CBUSubBBsComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UItemActorFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUDimensionTypeComponent\@\@\@\@V?$OptionalGlobalT\@$$CBULocalConstBlockSourceFactoryComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
 */
MCAPI void _tickLiquidBlocksFetch(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct StateVectorComponent, struct UpdateWaterStateRequestComponent, struct AABBShapeComponent const, struct SubBBsComponent const, class Optional<class FlagComponent<struct ItemActorFlag> const>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct DimensionTypeComponent const>, class OptionalGlobalT<struct LocalConstBlockSourceFactoryComponent const, class EntityRegistryBase>);
/**
 * @symbol ?createFilterSystem\@LiquidPhysicsSystem\@\@YA?AUTickingSystemWithInfo\@\@_N\@Z
 */
MCAPI struct TickingSystemWithInfo createFilterSystem(bool);
/**
 * @symbol ?createLiquidFetchingSystem\@LiquidPhysicsSystem\@\@YA?AUTickingSystemWithInfo\@\@XZ
 */
MCAPI struct TickingSystemWithInfo createLiquidFetchingSystem();
// NOLINTEND

}; // namespace LiquidPhysicsSystem
