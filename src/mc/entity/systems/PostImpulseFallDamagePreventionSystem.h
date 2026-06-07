#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct AutoClimbTravelFlagComponent;
struct FallDistanceComponent;
struct GlidingTravelFlagComponent;
struct HasTeleportedFlagComponent;
struct LavaTravelFlagComponent;
struct LevitateTravelFlagComponent;
struct OnGroundFlagComponent;
struct PassengerComponent;
struct PlayerComponent;
struct PostImpulseFallDamagePreventionComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct WasInWaterFlagComponent;
// clang-format on

namespace PostImpulseFallDamagePreventionSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickPostImpulseFallDamagePreventionSystem(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::FallDistanceComponent>> entity,
    ::StrictEntityContext const&                                                              svc,
    ::StateVectorComponent const&                    postImpulseFallDamagePreventionComponent,
    ::PostImpulseFallDamagePreventionComponent&      playerComponent,
    ::Optional<::PlayerComponent const>              wasInWater,
    ::Optional<::WasInWaterFlagComponent const>      onGround,
    ::Optional<::OnGroundFlagComponent const>        isLevitating,
    ::Optional<::LevitateTravelFlagComponent const>  isClimbing,
    ::Optional<::AutoClimbTravelFlagComponent const> isGliding,
    ::Optional<::GlidingTravelFlagComponent const>   isInLava,
    ::Optional<::LavaTravelFlagComponent const>      isPassenger,
    ::Optional<::PassengerComponent const>           didTeleport,
    ::Optional<::HasTeleportedFlagComponent const>   actorDataFlag,
    ::Optional<::ActorDataFlagComponent const>       modifier,
    ::EntityModifier<::PostImpulseFallDamagePreventionComponent>
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace PostImpulseFallDamagePreventionSystem
