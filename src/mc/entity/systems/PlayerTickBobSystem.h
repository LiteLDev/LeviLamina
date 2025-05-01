#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct ActorTickedComponent;
struct AttributesComponent;
struct OnGroundFlagComponent;
struct PlayerBobComponent;
struct StateVectorComponent;
// clang-format on

namespace PlayerTickBobSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tick(
    ::entt::type_list<::Include<::ActorTickedComponent>>,
    ::ActorDataFlagComponent const&           actorDataFlags,
    ::AttributesComponent const&              attributesComponent,
    ::StateVectorComponent const&             stateVectorComponent,
    ::PlayerBobComponent&                     playerBobComponent,
    ::Optional<::OnGroundFlagComponent const> isOnGround
);
// NOLINTEND

} // namespace PlayerTickBobSystem
