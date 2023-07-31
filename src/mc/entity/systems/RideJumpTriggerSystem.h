#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class RideJumpTriggerSystem {

public:
    // prevent constructor by default
    RideJumpTriggerSystem& operator=(RideJumpTriggerSystem const&) = delete;
    RideJumpTriggerSystem(RideJumpTriggerSystem const&)            = delete;
    RideJumpTriggerSystem()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@RideJumpTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tickRideJumpTriggerSystem\@RideJumpTriggerSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUMoveInputComponent\@\@AEBUPassengerComponent\@\@AEAUJumpRidingScaleComponent\@\@AEAUVanillaClientGameplayComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UMobFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMobOnPlayerJumpRequestComponent\@\@USendPacketsComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _tickRideJumpTriggerSystem(class StrictEntityContext&, struct MoveInputComponent const&, struct PassengerComponent const&, struct JumpRidingScaleComponent&, struct VanillaClientGameplayComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct PassengerComponent const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MobOnPlayerJumpRequestComponent, struct SendPacketsComponent>&);
    // NOLINTEND
};
