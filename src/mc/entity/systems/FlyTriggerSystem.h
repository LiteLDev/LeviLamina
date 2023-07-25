#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"

class FlyTriggerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYTRIGGERSYSTEM
public:
    FlyTriggerSystem& operator=(FlyTriggerSystem const&) = delete;
    FlyTriggerSystem(FlyTriggerSystem const&)            = delete;
    FlyTriggerSystem()                                   = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@FlyTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?tickEntity\@FlyTriggerSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUActorUniqueIDComponent\@\@AEBUMoveInputComponent\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@AEAUAbilitiesComponent\@\@AEAUFallDistanceComponent\@\@AEAUPlayerInputRequestComponent\@\@AEAUVanillaClientGameplayComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@\@Z
     */
    MCAPI static void
    tickEntity(class StrictEntityContext const&, struct ActorUniqueIDComponent const&, struct MoveInputComponent const&, class Optional<struct PassengerComponent const>, struct AbilitiesComponent&, struct FallDistanceComponent&, struct PlayerInputRequestComponent&, struct VanillaClientGameplayComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>);
};
