#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class TryExitVehicleSystem {

public:
    // prevent constructor by default
    TryExitVehicleSystem& operator=(TryExitVehicleSystem const&) = delete;
    TryExitVehicleSystem(TryExitVehicleSystem const&)            = delete;
    TryExitVehicleSystem()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@TryExitVehicleSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tickTryExitVehicle\@TryExitVehicleSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UBoatFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UMobFlag\@\@\@\@\@\@V?$Optional\@$$CBUAttributesComponent\@\@\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _tickTryExitVehicle(class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Exclude<class FlagComponent<struct BoatFlag>>, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct AttributesComponent const>, struct VehicleComponent const, struct SynchedActorDataComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ExitFromPassengerFlag>>&);
    // NOLINTEND
};
