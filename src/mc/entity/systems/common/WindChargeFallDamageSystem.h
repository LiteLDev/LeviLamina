#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace WindChargeFallDamageSystem {
// NOLINTBEGIN
MCAPI void
_tickWindChargeFallDamageSystem(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct FallDistanceComponent>>, class StrictEntityContext const&, struct StateVectorComponent const&, struct WindChargeKnockbackComponent&, class Optional<class FlagComponent<struct PlayerComponentFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<struct OnGroundFlagComponent const>, class Optional<class FlagComponent<struct LevitateTravelFlag> const>, class Optional<class FlagComponent<struct AutoClimbTravelFlag> const>, class Optional<class FlagComponent<struct GlidingTravelFlag> const>, class Optional<class FlagComponent<struct LavaTravelFlag> const>, class Optional<struct PassengerComponent const>, class Optional<class FlagComponent<struct HasTeleportedFlag> const>, class EntityModifier<struct WindChargeKnockbackComponent>);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace WindChargeFallDamageSystem
