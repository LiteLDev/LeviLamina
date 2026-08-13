#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ItemActorFlagComponent;
struct LiquidBlockEntry;
struct MovementAbilitiesComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct TickingSystemWithInfo;
struct UpdateWaterStateRequestComponent;
// clang-format on

namespace LiquidPhysicsSystem {
// functions
// NOLINTBEGIN
MCAPI void _liquidBlockFetch(
    ::StrictEntityContext const&,
    ::StateVectorComponent&                    stateVector,
    ::UpdateWaterStateRequestComponent&        request,
    ::AABBShapeComponent const&                aabbShape,
    ::SubBBsComponent const&                   subBBs,
    ::Optional<::ItemActorFlagComponent const> maybeItem,
    ::std::vector<::LiquidBlockEntry>&         scratch,
    ::IConstBlockSource const&                 region
);

MCAPI void _markForLiquidFlow(
    ::UpdateWaterStateRequestComponent&                   updateWaterStateRequest,
    ::Optional<::MovementAbilitiesComponent const> const& abilities
);

MCAPI ::TickingSystemWithInfo createFilterSystem(bool isClientSide);

MCAPI ::TickingSystemWithInfo createLiquidFetchingSystem();
// NOLINTEND

} // namespace LiquidPhysicsSystem
