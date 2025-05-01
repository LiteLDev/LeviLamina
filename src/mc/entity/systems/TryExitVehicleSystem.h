#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct BoatFlagComponent;
struct ExitFromPassengerFlagComponent;
struct MobFlagComponent;
struct MovementAttributesComponent;
struct PassengerComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class TryExitVehicleSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickTryExitVehicle(
        ::StrictEntityContext const& entity,
        ::PassengerComponent const&  passengerComponent,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent>,
            ::Exclude<::BoatFlagComponent>,
            ::Optional<::MobFlagComponent const>,
            ::MovementAttributesComponent const,
            ::VehicleComponent const,
            ::ActorDataFlagComponent const,
            ::ActorDataControllingSeatIndexComponent const>                               vehiclesPlayerIsJumping,
        ::EntityModifier<::StopRidingRequestComponent, ::ExitFromPassengerFlagComponent>& modifier
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
