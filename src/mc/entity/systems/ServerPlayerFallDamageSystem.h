#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class ServerPlayerFallDamageSystem {
public:
    // prevent constructor by default
    ServerPlayerFallDamageSystem& operator=(ServerPlayerFallDamageSystem const&);
    ServerPlayerFallDamageSystem(ServerPlayerFallDamageSystem const&);
    ServerPlayerFallDamageSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _doServerPlayerFallDamageSystem(class StrictEntityContext const&, struct MovementAbilitiesComponent const&, struct ActorDataFlagComponent const&, struct StateVectorComponent const&, class ActorOwnerComponent&, struct FallDistanceComponent&, class Optional<class FlagComponent<struct WasOnGroundFlag> const>, class Optional<struct OnGroundFlagComponent const>, class Optional<class FlagComponent<struct HasTeleportedFlag> const>, class EntityModifier<class FlagComponent<struct HasTeleportedFlag>, class FlagComponent<struct WasOnGroundFlag>>);

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
