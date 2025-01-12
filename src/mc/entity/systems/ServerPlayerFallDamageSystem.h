#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct FallDistanceComponent;
struct HasTeleportedFlagComponent;
struct MovementAbilitiesComponent;
struct OnGroundFlagComponent;
struct ServerPlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct WasOnGroundFlagComponent;
// clang-format on

class ServerPlayerFallDamageSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doServerPlayerFallDamageSystem(
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

    MCAPI static void _tickServerPlayerFallDamageSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::ServerPlayerComponent>,
            ::MovementAbilitiesComponent const,
            ::ActorDataFlagComponent const,
            ::StateVectorComponent const,
            ::ActorOwnerComponent,
            ::FallDistanceComponent,
            ::Optional<::WasOnGroundFlagComponent const>,
            ::Optional<::OnGroundFlagComponent const>,
            ::Optional<::HasTeleportedFlagComponent const>>                        view,
        ::EntityModifier<::HasTeleportedFlagComponent, ::WasOnGroundFlagComponent> mod
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
