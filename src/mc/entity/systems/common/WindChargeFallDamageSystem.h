#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace WindChargeFallDamageSystem {
// NOLINTBEGIN
// symbol:
// ?_tickWindChargeFallDamageSystem@WindChargeFallDamageSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UWindChargeKnockbackComponent@@UFallDistanceComponent@@@@@entt@@AEBVStrictEntityContext@@AEBUStateVectorComponent@@V?$Optional@$$CBV?$FlagComponent@UInWaterFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@ULevitateTravelFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UAutoClimbTravelFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UGlidingTravelFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@ULavaTravelFlag@@@@@@V?$Optional@$$CBUPassengerComponent@@@@V?$EntityModifier@UWindChargeKnockbackComponent@@@@@Z
MCAPI void
_tickWindChargeFallDamageSystem(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct WindChargeKnockbackComponent, struct FallDistanceComponent>>, class StrictEntityContext const&, struct StateVectorComponent const&, class Optional<class FlagComponent<struct InWaterFlag> const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<class FlagComponent<struct LevitateTravelFlag> const>, class Optional<class FlagComponent<struct AutoClimbTravelFlag> const>, class Optional<class FlagComponent<struct GlidingTravelFlag> const>, class Optional<class FlagComponent<struct LavaTravelFlag> const>, class Optional<struct PassengerComponent const>, class EntityModifier<struct WindChargeKnockbackComponent>);

// symbol: ?createSystem@WindChargeFallDamageSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace WindChargeFallDamageSystem
