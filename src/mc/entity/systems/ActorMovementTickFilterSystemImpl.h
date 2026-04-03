#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct InterpolateMovementNeededComponent;
struct ShouldBeSimulatedComponent;
// clang-format on

namespace ActorMovementTickFilterSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void designateAllEntities(
    ::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>> tickNeeded,
    ::EntityModifier<::InterpolateMovementNeededComponent>                        modifier
);

MCNAPI void designateSimulatedEntities(
    ::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>> tickNeeded,
    ::ViewT<::StrictEntityContext, ::Include<::ShouldBeSimulatedComponent>>       shouldBeSimulated,
    ::EntityModifier<::InterpolateMovementNeededComponent>                        modifier
);
// NOLINTEND

} // namespace ActorMovementTickFilterSystemImpl
