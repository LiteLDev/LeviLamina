#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class MobRemovePassengerSystem {

public:
    // prevent constructor by default
    MobRemovePassengerSystem& operator=(MobRemovePassengerSystem const&) = delete;
    MobRemovePassengerSystem(MobRemovePassengerSystem const&)            = delete;
    MobRemovePassengerSystem()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@MobRemovePassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?removePassengerSystem\@MobRemovePassengerSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@V?$Optional\@$$CBUVehicleComponent\@\@\@\@AEAUMobJumpComponent\@\@AEAUSynchedActorDataComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UParrotFlag\@\@\@\@\@\@$$CBUPassengerComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void removePassengerSystem(class StrictEntityContext const&, struct StateVectorComponent const&, class Optional<struct VehicleComponent const>, struct MobJumpComponent&, struct SynchedActorDataComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct MobIsJumpingFlag>>&);
    // NOLINTEND
};
