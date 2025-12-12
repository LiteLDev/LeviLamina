#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct DimensionTypeComponent;
struct ItemActorFlagComponent;
struct LiquidBlockEntry;
struct LocalConstBlockSourceFactoryComponent;
struct MovementAbilitiesComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct TickingSystemWithInfo;
struct UpdateWaterStateRequestComponent;
// clang-format on

namespace LiquidPhysicsSystem {
// functions
// NOLINTBEGIN
MCNAPI void _liquidBlockFetch(
    ::StrictEntityContext const&,
    ::StateVectorComponent&                    stateVector,
    ::UpdateWaterStateRequestComponent&        request,
    ::AABBShapeComponent const&                aabbShape,
    ::SubBBsComponent const&                   subBBs,
    ::Optional<::ItemActorFlagComponent const> maybeItem,
    ::std::vector<::LiquidBlockEntry>&         scratch,
    ::IConstBlockSource const&                 region
);

MCNAPI void _markForLiquidFlow(
    ::UpdateWaterStateRequestComponent&                   updateWaterStateRequest,
    ::Optional<::MovementAbilitiesComponent const> const& abilities
);

MCNAPI void _singleTickLiquidBlocksFetch(
    ::StrictEntityContext& entity,
    ::ViewT<
        ::StrictEntityContext,
        ::StateVectorComponent,
        ::UpdateWaterStateRequestComponent,
        ::AABBShapeComponent const,
        ::SubBBsComponent const,
        ::Optional<::ItemActorFlagComponent const>>                 view,
    ::ViewT<::StrictEntityContext, ::DimensionTypeComponent const>  dimensionView,
    ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent const> factory
);

MCNAPI void _tickLiquidBlocksFetch(
    ::ViewT<
        ::StrictEntityContext,
        ::StateVectorComponent,
        ::UpdateWaterStateRequestComponent,
        ::AABBShapeComponent const,
        ::SubBBsComponent const,
        ::Optional<::ItemActorFlagComponent const>>                 view,
    ::ViewT<::StrictEntityContext, ::DimensionTypeComponent const>  dimensionView,
    ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent const> factory
);

MCNAPI ::TickingSystemWithInfo createFilterSystem(bool isClientSide);
// NOLINTEND

} // namespace LiquidPhysicsSystem
