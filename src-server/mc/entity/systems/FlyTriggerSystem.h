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
MCNAPI ::TickingSystemWithInfo createActionSystem();

MCNAPI ::TickingSystemWithInfo createIntentSystem();

MCNAPI ::TickingSystemWithInfo createRemovePermissionFlyFlagSystem();

MCNAPI void doActionTick(::entt::type_list<::Include<::ActorMovementTickNeededComponent>>, ::StrictEntityContext const& entity, ::PlayerActionComponent const& playerAction, ::Optional<::PermissionFlyFlagComponent const> permissionFlyFlag, ::FallDistanceComponent& fallDistanceComponent, ::VanillaClientGameplayComponent& vanillaClientGameplayComponent, ::EntityModifier<::AbilitiesRequestComponent> modifier);

MCNAPI void doIntentTick(::entt::type_list<::Include<::ActorMovementTickNeededComponent>>, ::Optional<::PassengerComponent const> const& passenger, ::MoveInputComponent const& moveInputComponent, ::PlayerActionComponent& playerAction, ::PlayerInputRequestComponent& playerInputRequestComponent, ::VanillaClientGameplayComponent& vanillaClientGameplayComponent);
// NOLINTEND

}
