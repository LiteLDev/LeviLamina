#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
// clang-format on

namespace StartGlidingActionSystemImpl {
// functions
// NOLINTBEGIN
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
