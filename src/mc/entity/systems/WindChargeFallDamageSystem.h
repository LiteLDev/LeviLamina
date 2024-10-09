#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace WindChargeFallDamageSystem {
// NOLINTBEGIN
MCAPI void _tickWindChargeFallDamageSystem(
    entt::type_list<
        struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct FallDistanceComponent>>,
    class StrictEntityContext const&                                      entity,
    struct StateVectorComponent const&                                    svc,
    struct WindChargeKnockbackComponent&                                  windChargeKnockback,
    class Optional<class FlagComponent<struct PlayerComponentFlag> const> playerComponent,
    class Optional<class FlagComponent<struct InWaterFlag> const>         wasInWater,
    class Optional<struct OnGroundFlagComponent const>                    onGround,
    class Optional<class FlagComponent<struct LevitateTravelFlag> const>  isLevitating,
    class Optional<class FlagComponent<struct AutoClimbTravelFlag> const> isClimbing,
    class Optional<class FlagComponent<struct GlidingTravelFlag> const>   isGliding,
    class Optional<class FlagComponent<struct LavaTravelFlag> const>      isInLava,
    class Optional<struct PassengerComponent const>                       isPassenger,
    class Optional<class FlagComponent<struct HasTeleportedFlag> const>   didTeleport,
    class EntityModifier<struct WindChargeKnockbackComponent>             modifier
);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace WindChargeFallDamageSystem
