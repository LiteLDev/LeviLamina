#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class StrictEntityContext;
struct AbilitiesComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorUniqueIDComponent;
struct AttributesComponent;
struct PlayerActionComponent;
struct SendPacketsComponent;
struct ServerPlayerCurrentMovementComponent;
// clang-format on

namespace ValidateClientPlayerActionSystem {
// functions
// NOLINTBEGIN
MCNAPI void comparePlayerActionComponent(
    ::StrictEntityContext const&                      entity,
    ::PlayerActionComponent const&                    serverPlayerAction,
    ::ServerPlayerCurrentMovementComponent const&     serverPlayerCurrentMovement,
    ::ActorDataDirtyFlagsComponent&                   actorDataDirtyFlags,
    ::AttributesComponent&                            attributes,
    ::Optional<::ActorUniqueIDComponent const> const& actorUniqueId,
    ::Optional<::AbilitiesComponent const> const&     abilities,
    ::EntityModifier<::SendPacketsComponent>          modifier
);

MCNAPI void registerServerSystems(::EntitySystems& systemRegistry);

MCNAPI void tickPlayerActionComparison(
    ::ViewT<
        ::StrictEntityContext,
        ::PlayerActionComponent const,
        ::ServerPlayerCurrentMovementComponent const,
        ::ActorDataDirtyFlagsComponent,
        ::AttributesComponent,
        ::Optional<::ActorUniqueIDComponent const>,
        ::Optional<::AbilitiesComponent const>> view,
    ::EntityModifier<::SendPacketsComponent>    modifier
);
// NOLINTEND

} // namespace ValidateClientPlayerActionSystem
