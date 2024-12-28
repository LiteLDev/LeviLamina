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
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct WasInWaterFlagComponent;
struct WindChargeKnockbackComponent;
// clang-format on

namespace WindChargeFallDamageSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickWindChargeFallDamageSystem(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::FallDistanceComponent>>,
    ::StrictEntityContext const&                     entity,
    ::StateVectorComponent const&                    svc,
    ::WindChargeKnockbackComponent&                  windChargeKnockback,
    ::Optional<::PlayerComponent const>              playerComponent,
    ::Optional<::WasInWaterFlagComponent const>      wasInWater,
    ::Optional<::OnGroundFlagComponent const>        onGround,
    ::Optional<::LevitateTravelFlagComponent const>  isLevitating,
    ::Optional<::AutoClimbTravelFlagComponent const> isClimbing,
    ::Optional<::GlidingTravelFlagComponent const>   isGliding,
    ::Optional<::LavaTravelFlagComponent const>      isInLava,
    ::Optional<::PassengerComponent const>           isPassenger,
    ::Optional<::HasTeleportedFlagComponent const>   didTeleport,
    ::Optional<::ActorDataFlagComponent const>       actorDataFlag,
    ::EntityModifier<::WindChargeKnockbackComponent> modifier
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace WindChargeFallDamageSystem
