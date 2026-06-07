#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct CurrentTickComponent;
struct ElytraFlightTimeTicksComponent;
struct PlayerActionComponent;
struct PlayerInputRequestComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct Tick;
// clang-format on

namespace StartGlidingActionSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doStartGlidingAction(
    ::StrictEntityContext const&                                 context,
    ::PlayerActionComponent const&                               playerActionComponent,
    ::ActorDataFlagComponent&                                    actorDataFlagComponent,
    ::ActorDataDirtyFlagsComponent&                              dirtyFlagsComponent,
    ::optional_ref<::ElytraFlightTimeTicksComponent>             elytraFlightTimeTicksComponent,
    ::Tick const&                                                currentTick,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent>& mod
);

MCAPI void doStartGlidingClientAction(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::PlayerInputRequestComponent>,
        ::PlayerActionComponent const,
        ::ActorDataFlagComponent,
        ::ActorDataDirtyFlagsComponent>                         view,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> modifier
);

MCAPI void doStartGlidingServerAction(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::PlayerInputRequestComponent>,
        ::PlayerActionComponent const,
        ::ActorDataFlagComponent,
        ::ActorDataDirtyFlagsComponent,
        ::ElytraFlightTimeTicksComponent>                       view,
    ::OptionalGlobal<::CurrentTickComponent const>              tickComponent,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> modifier
);
// NOLINTEND

} // namespace StartGlidingActionSystemImpl
