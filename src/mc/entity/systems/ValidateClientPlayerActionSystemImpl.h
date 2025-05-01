#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AbilitiesComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorUniqueIDComponent;
struct AttributesComponent;
struct PlayerActionAcceptanceComponent;
struct PlayerActionComponent;
struct SendPacketsComponent;
struct ServerPlayerCurrentMovementComponent;
// clang-format on

namespace ValidateClientPlayerActionSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void compareAntiCheatPlayerActionComponent(
    ::StrictEntityContext const&                      entity,
    ::PlayerActionComponent const&                    serverPlayerAction,
    ::ServerPlayerCurrentMovementComponent const&     serverPlayerCurrentMovement,
    ::ActorDataDirtyFlagsComponent&                   actorDataDirtyFlags,
    ::AttributesComponent&                            attributes,
    ::Optional<::ActorUniqueIDComponent const> const& actorUniqueId,
    ::Optional<::AbilitiesComponent const> const&     abilities,
    ::EntityModifier<::SendPacketsComponent>          modifier
);

MCNAPI void filterPlayerActionComparison(
    ::StrictEntityContext const&                        entity,
    ::PlayerActionComponent const&                      serverPlayerAction,
    ::ServerPlayerCurrentMovementComponent&             serverPlayerCurrentMovement,
    ::EntityModifier<::PlayerActionAcceptanceComponent> mod,
    bool                                                skipComparison
);
// NOLINTEND

} // namespace ValidateClientPlayerActionSystemImpl
