#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

class ServerPlayerFallDamageSystem {
public:
    // prevent constructor by default
    ServerPlayerFallDamageSystem& operator=(ServerPlayerFallDamageSystem const&);
    ServerPlayerFallDamageSystem(ServerPlayerFallDamageSystem const&);
    ServerPlayerFallDamageSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _doServerPlayerFallDamageSystem(
        class StrictEntityContext const&                                    entity,
        struct MovementAbilitiesComponent const&                            abilitiesComponent,
        struct ActorDataFlagComponent const&                                synchedActorDataComponent,
        struct StateVectorComponent const&                                  stateVectorComponent,
        class ActorOwnerComponent&                                          actor,
        struct FallDistanceComponent&                                       fallDistanceComponent,
        class Optional<class FlagComponent<struct WasOnGroundFlag> const>   wasOnGroundComponent,
        class Optional<struct OnGroundFlagComponent const>                  onGroundComponent,
        class Optional<class FlagComponent<struct HasTeleportedFlag> const> hasTeleportedComponent,
        class EntityModifier<class FlagComponent<struct HasTeleportedFlag>, class FlagComponent<struct WasOnGroundFlag>>
            mod
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
