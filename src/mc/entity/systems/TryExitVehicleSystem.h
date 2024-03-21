#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class TryExitVehicleSystem {
public:
    // prevent constructor by default
    TryExitVehicleSystem& operator=(TryExitVehicleSystem const&);
    TryExitVehicleSystem(TryExitVehicleSystem const&);
    TryExitVehicleSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@TryExitVehicleSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tick@TryExitVehicleSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@V?$FlagComponent@UMobIsJumpingFlag@@@@@@$$CBUPassengerComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@U?$Exclude@V?$FlagComponent@UBoatFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@$$CBUMovementAttributesComponent@@$$CBUVehicleComponent@@$$CBUActorDataFlagComponent@@$$CBUActorDataControllingSeatIndexComponent@@@@V?$EntityModifier@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@UExitFromPassengerFlag@@@@@@@Z
    MCAPI static void _tick(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct LocalPlayerComponentFlag>,
                class FlagComponent<struct MobIsJumpingFlag>>,
            struct PassengerComponent const> view,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            struct Exclude<class FlagComponent<struct BoatFlag>>,
            class Optional<class FlagComponent<struct MobFlag> const>,
            struct MovementAttributesComponent const,
            struct VehicleComponent const,
            struct ActorDataFlagComponent const,
            struct ActorDataControllingSeatIndexComponent const>,
        class EntityModifier<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct ExitFromPassengerFlag>> modifier
    );

    // symbol:
    // ?_tickTryExitVehicle@TryExitVehicleSystem@@CAXAEBVStrictEntityContext@@AEBUPassengerComponent@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@U?$Exclude@V?$FlagComponent@UBoatFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@$$CBUMovementAttributesComponent@@$$CBUVehicleComponent@@$$CBUActorDataFlagComponent@@$$CBUActorDataControllingSeatIndexComponent@@@@AEAV?$EntityModifier@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@UExitFromPassengerFlag@@@@@@@Z
    MCAPI static void _tickTryExitVehicle(
        class StrictEntityContext const& entity,
        struct PassengerComponent const&,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            struct Exclude<class FlagComponent<struct BoatFlag>>,
            class Optional<class FlagComponent<struct MobFlag> const>,
            struct MovementAttributesComponent const,
            struct VehicleComponent const,
            struct ActorDataFlagComponent const,
            struct ActorDataControllingSeatIndexComponent const>,
        class EntityModifier<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct ExitFromPassengerFlag>>& modifier
    );

    // NOLINTEND
};
