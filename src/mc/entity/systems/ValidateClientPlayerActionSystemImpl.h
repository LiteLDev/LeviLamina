#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct AttributesComponent;
struct PlayerActionAcceptanceComponent;
struct PlayerActionComponent;
struct ServerPlayerCurrentMovementComponent;
// clang-format on

namespace ValidateClientPlayerActionSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void compareAntiCheatPlayerActionComponent(
    ::PlayerActionComponent const&                serverPlayerAction,
    ::ServerPlayerCurrentMovementComponent const& serverPlayerCurrentMovement,
    ::ActorDataDirtyFlagsComponent&               actorDataDirtyFlags,
    ::AttributesComponent&                        attributes
);

MCAPI void filterPlayerActionComparison(
    ::StrictEntityContext const&                        entity,
    ::PlayerActionComponent const&                      serverPlayerAction,
    ::ServerPlayerCurrentMovementComponent&             serverPlayerCurrentMovement,
    ::EntityModifier<::PlayerActionAcceptanceComponent> mod,
    bool                                                skipComparison
);
// NOLINTEND

} // namespace ValidateClientPlayerActionSystemImpl
