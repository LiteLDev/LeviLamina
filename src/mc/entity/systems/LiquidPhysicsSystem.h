#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace LiquidPhysicsSystem {
// NOLINTBEGIN
// symbol:
// ?_liquidBlockFetch@LiquidPhysicsSystem@@YAXAEBVStrictEntityContext@@AEAUStateVectorComponent@@AEAUUpdateWaterStateRequestComponent@@AEBUAABBShapeComponent@@AEBUSubBBsComponent@@V?$Optional@$$CBV?$FlagComponent@UItemActorFlag@@@@@@AEAV?$vector@ULiquidBlockEntry@@V?$allocator@ULiquidBlockEntry@@@std@@@std@@AEBVIConstBlockSource@@@Z
MCAPI void _liquidBlockFetch(
    class StrictEntityContext const&,
    struct StateVectorComponent&,
    struct UpdateWaterStateRequestComponent& request,
    struct AABBShapeComponent const&,
    struct SubBBsComponent const&,
    class Optional<class FlagComponent<struct ItemActorFlag> const>,
    std::vector<struct LiquidBlockEntry>& scratch,
    class IConstBlockSource const&        region
);

// symbol:
// ?_markForLiquidFlow@LiquidPhysicsSystem@@YAXAEAUUpdateWaterStateRequestComponent@@AEBV?$Optional@$$CBUMovementAbilitiesComponent@@@@@Z
MCAPI void
_markForLiquidFlow(struct UpdateWaterStateRequestComponent&, class Optional<struct MovementAbilitiesComponent const> const&);

// symbol:
// ?_tickLiquidBlocksFetch@LiquidPhysicsSystem@@YAXV?$ViewT@VStrictEntityContext@@UStateVectorComponent@@UUpdateWaterStateRequestComponent@@$$CBUAABBShapeComponent@@$$CBUSubBBsComponent@@V?$Optional@$$CBV?$FlagComponent@UItemActorFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUDimensionTypeComponent@@@@V?$OptionalGlobal@$$CBULocalConstBlockSourceFactoryComponent@@@@@Z
MCAPI void _tickLiquidBlocksFetch(
    class ViewT<
        class StrictEntityContext,
        struct StateVectorComponent,
        struct UpdateWaterStateRequestComponent,
        struct AABBShapeComponent const,
        struct SubBBsComponent const,
        class Optional<class FlagComponent<struct ItemActorFlag> const>> view,
    class ViewT<class StrictEntityContext, struct DimensionTypeComponent const>,
    class OptionalGlobal<struct LocalConstBlockSourceFactoryComponent const> factory
);

// symbol: ?createFilterSystem@LiquidPhysicsSystem@@YA?AUTickingSystemWithInfo@@_N@Z
MCAPI struct TickingSystemWithInfo createFilterSystem(bool isClientSide);

// symbol: ?createLiquidFetchingSystem@LiquidPhysicsSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createLiquidFetchingSystem();
// NOLINTEND

}; // namespace LiquidPhysicsSystem
