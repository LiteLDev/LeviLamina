#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct PlayerActionComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
// clang-format on

namespace StopGlidingActionSystemImpl {
// functions
// NOLINTBEGIN
MCAPI bool doStopGlidingAction(
    ::StrictEntityContext const&                                 context,
    ::PlayerActionComponent const&                               playerActionComponent,
    ::ActorDataFlagComponent&                                    actorDataFlagComponent,
    ::ActorDataDirtyFlagsComponent&                              dirtyFlagsComponent,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent>& mod
);
// NOLINTEND

} // namespace StopGlidingActionSystemImpl
