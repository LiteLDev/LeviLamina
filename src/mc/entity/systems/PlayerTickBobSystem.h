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
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerTickBobSystem {
// functions
// NOLINTBEGIN
MCAPI void _tick(
    ::entt::type_list<::Include<::ActorTickedComponent>> actorDataFlags,
    ::ActorDataFlagComponent const&                      attributesComponent,
    ::AttributesComponent const&                         stateVectorComponent,
    ::StateVectorComponent const&                        playerBobComponent,
    ::PlayerBobComponent&                                isOnGround,
    ::Optional<::OnGroundFlagComponent const>
);

MCAPI ::TickingSystemWithInfo createPassengerSystem();

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace PlayerTickBobSystem
