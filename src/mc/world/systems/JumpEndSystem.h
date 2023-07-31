#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class JumpEndSystem {

public:
    // prevent constructor by default
    JumpEndSystem& operator=(JumpEndSystem const&) = delete;
    JumpEndSystem(JumpEndSystem const&)            = delete;
    JumpEndSystem()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?create\@JumpEndSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?tick\@JumpEndSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@V?$Optional\@$$CBUVehicleComponent\@\@\@\@$$CBUStateVectorComponent\@\@UJumpTicksComponent\@\@UMobJumpComponent\@\@USynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UParrotFlag\@\@\@\@\@\@$$CBUPassengerComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, class Optional<struct VehicleComponent const>, struct StateVectorComponent const, struct JumpTicksComponent, struct MobJumpComponent, struct SynchedActorDataComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ParrotFlag>>, struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct MobIsJumpingFlag>>);
    // NOLINTEND
};
