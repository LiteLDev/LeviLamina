#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace LiquidPhysicsSystem {
// NOLINTBEGIN
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

MCAPI void
_markForLiquidFlow(struct UpdateWaterStateRequestComponent&, class Optional<struct MovementAbilitiesComponent const> const&);

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

MCAPI struct TickingSystemWithInfo createFilterSystem(bool isClientSide);

MCAPI struct TickingSystemWithInfo createLiquidFetchingSystem();
// NOLINTEND

}; // namespace LiquidPhysicsSystem
