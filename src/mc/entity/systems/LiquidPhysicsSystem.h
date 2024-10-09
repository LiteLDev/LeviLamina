#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

namespace LiquidPhysicsSystem {
// NOLINTBEGIN
MCAPI void _liquidBlockFetch(
    class StrictEntityContext const&,
    struct StateVectorComponent&                                    stateVector,
    struct UpdateWaterStateRequestComponent&                        request,
    struct AABBShapeComponent const&                                aabbShape,
    struct SubBBsComponent const&                                   subBBs,
    class Optional<class FlagComponent<struct ItemActorFlag> const> maybeItem,
    std::vector<struct LiquidBlockEntry>&                           scratch,
    class IConstBlockSource const&                                  region
);

MCAPI void _markForLiquidFlow(
    struct UpdateWaterStateRequestComponent&                       updateWaterStateRequest,
    class Optional<struct MovementAbilitiesComponent const> const& abilities
);

MCAPI void _tickLiquidBlocksFetch(
    class ViewT<
        class StrictEntityContext,
        struct StateVectorComponent,
        struct UpdateWaterStateRequestComponent,
        struct AABBShapeComponent const,
        struct SubBBsComponent const,
        class Optional<class FlagComponent<struct ItemActorFlag> const>>        view,
    class ViewT<class StrictEntityContext, struct DimensionTypeComponent const> dimensionView,
    class OptionalGlobal<struct LocalConstBlockSourceFactoryComponent const>    factory
);

MCAPI struct TickingSystemWithInfo createFilterSystem(bool isClientSide);

MCAPI struct TickingSystemWithInfo createLiquidFetchingSystem();
// NOLINTEND

}; // namespace LiquidPhysicsSystem
