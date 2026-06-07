#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AbilitiesRequestComponent;
struct ActorMovementTickNeededComponent;
struct FallDistanceComponent;
struct MoveInputComponent;
struct PassengerComponent;
struct PermissionFlyFlagComponent;
struct PlayerActionComponent;
struct PlayerInputRequestComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

namespace FlyTriggerSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createActionSystem();

MCAPI ::TickingSystemWithInfo createIntentSystem();

MCAPI ::TickingSystemWithInfo createRemovePermissionFlyFlagSystem();

MCAPI void doActionTick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> entity,
    ::StrictEntityContext const&                                     playerAction,
    ::PlayerActionComponent const&                                   permissionFlyFlag,
    ::Optional<::PermissionFlyFlagComponent const>                   fallDistanceComponent,
    ::FallDistanceComponent&                                         vanillaClientGameplayComponent,
    ::VanillaClientGameplayComponent&                                modifier,
    ::EntityModifier<::AbilitiesRequestComponent>
);

MCAPI void doIntentTick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>> passenger,
    ::Optional<::PassengerComponent const> const&                    moveInputComponent,
    ::MoveInputComponent const&                                      playerAction,
    ::PlayerActionComponent&                                         playerInputRequestComponent,
    ::PlayerInputRequestComponent&                                   vanillaClientGameplayComponent,
    ::VanillaClientGameplayComponent&
);
// NOLINTEND

} // namespace FlyTriggerSystem
