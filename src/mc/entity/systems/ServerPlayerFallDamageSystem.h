#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct FallDistanceComponent;
struct HasTeleportedFlagComponent;
struct MovementAbilitiesComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct WasOnGroundFlagComponent;
// clang-format on

class ServerPlayerFallDamageSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doServerPlayerFallDamageSystem(
        ::StrictEntityContext const&                                               entity,
        ::MovementAbilitiesComponent const&                                        abilitiesComponent,
        ::ActorDataFlagComponent const&                                            synchedActorDataComponent,
        ::StateVectorComponent const&                                              stateVectorComponent,
        ::ActorOwnerComponent&                                                     actor,
        ::FallDistanceComponent&                                                   fallDistanceComponent,
        ::Optional<::WasOnGroundFlagComponent const>                               wasOnGroundComponent,
        ::Optional<::OnGroundFlagComponent const>                                  onGroundComponent,
        ::Optional<::HasTeleportedFlagComponent const>                             hasTeleportedComponent,
        ::EntityModifier<::HasTeleportedFlagComponent, ::WasOnGroundFlagComponent> mod
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
