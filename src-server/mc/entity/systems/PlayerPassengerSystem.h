#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
struct PassengerComponent;
struct ServerPlayerComponent;
// clang-format on

namespace PlayerPassengerSystem {
// functions
// NOLINTBEGIN
MCNAPI void tick(
    ::entt::type_list<::Include<::ServerPlayerComponent>>,
    ::ActorTickNeededComponent&                  actorTickNeeded,
    ::PassengerComponent const&                  passenger,
    ::EntityModifier<::ActorTickNeededComponent> modifier
);
// NOLINTEND

} // namespace PlayerPassengerSystem
