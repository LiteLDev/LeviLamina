#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct ActorTickedComponent;
struct ClientInputLockComponent;
struct ClientInputLockLastComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerInputPermissionEventSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void processChanges(::entt::type_list<::Include<::ActorTickedComponent, ::PlayerComponent>>, ::ClientInputLockComponent const& clientInputLock, ::ClientInputLockLastComponent& clientInputLockLast, ::Optional<::ActorOwnerComponent> actorOwner);
// NOLINTEND

}
