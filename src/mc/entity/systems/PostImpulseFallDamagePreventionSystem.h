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
struct AutoClimbTravelFlagComponent;
struct FallDistanceComponent;
struct GlidingTravelFlagComponent;
struct HasTeleportedFlagComponent;
struct InterpolateMovementNeededComponent;
struct LavaTravelFlagComponent;
struct LevitateTravelFlagComponent;
struct OnGroundFlagComponent;
struct PassengerComponent;
struct PlayerComponent;
struct PostImpulseFallDamagePreventionComponent;
struct StateVectorComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace PostImpulseFallDamagePreventionSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tickPostImpulseFallDamagePreventionSystem(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent, ::FallDistanceComponent>>,
    ::StrictEntityContext const&                                 entity,
    ::StateVectorComponent const&                                svc,
    ::PostImpulseFallDamagePreventionComponent&                  postImpulseFallDamagePreventionComponent,
    ::Optional<::PlayerComponent const>                          playerComponent,
    ::Optional<::WasInWaterFlagComponent const>                  wasInWater,
    ::Optional<::OnGroundFlagComponent const>                    onGround,
    ::Optional<::LevitateTravelFlagComponent const>              isLevitating,
    ::Optional<::AutoClimbTravelFlagComponent const>             isClimbing,
    ::Optional<::GlidingTravelFlagComponent const>               isGliding,
    ::Optional<::LavaTravelFlagComponent const>                  isInLava,
    ::Optional<::PassengerComponent const>                       isPassenger,
    ::Optional<::HasTeleportedFlagComponent const>               didTeleport,
    ::Optional<::ActorDataFlagComponent const>                   actorDataFlag,
    ::EntityModifier<::PostImpulseFallDamagePreventionComponent> modifier
);
// NOLINTEND

} // namespace PostImpulseFallDamagePreventionSystem
