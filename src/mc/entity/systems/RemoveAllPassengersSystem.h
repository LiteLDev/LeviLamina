#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class RemoveAllPassengersSystem {

public:
    // prevent constructor by default
    RemoveAllPassengersSystem& operator=(RemoveAllPassengersSystem const&) = delete;
    RemoveAllPassengersSystem(RemoveAllPassengersSystem const&)            = delete;
    RemoveAllPassengersSystem()                                            = delete;

public:
    /**
     * @symbol ?createSystem\@RemoveAllPassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
    /**
     * @symbol
     * ?removeAllPassengers\@RemoveAllPassengersSystem\@\@SAXAEAVStrictEntityContext\@\@AEAUVehicleComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    removeAllPassengers(class StrictEntityContext&, struct VehicleComponent&, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_tick\@RemoveAllPassengersSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@U?$Exclude\@VRideableComponent\@\@\@\@UVehicleComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Exclude<class RideableComponent>, struct VehicleComponent, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>); // NOLINT

private:
};
