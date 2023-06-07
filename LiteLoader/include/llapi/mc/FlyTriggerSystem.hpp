/**
 * @file  FlyTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FlyTriggerSystem.
 *
 */
class FlyTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYTRIGGERSYSTEM
public:
    class FlyTriggerSystem& operator=(class FlyTriggerSystem const &) = delete;
    FlyTriggerSystem(class FlyTriggerSystem const &) = delete;
    FlyTriggerSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@FlyTriggerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?tickEntity\@FlyTriggerSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUActorUniqueIDComponent\@\@AEBUMoveInputComponent\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@V?$Optional\@UPlayerActionComponent\@\@\@\@AEAUAbilitiesComponent\@\@AEAUFallDistanceComponent\@\@AEAUPlayerInputRequestComponent\@\@AEAUSynchedActorDataComponent\@\@AEAUVanillaClientGameplayComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@\@Z
     */
    MCAPI static void tickEntity(class StrictEntityContext const &, struct ActorUniqueIDComponent const &, struct MoveInputComponent const &, class Optional<struct PassengerComponent const>, class Optional<struct PlayerActionComponent>, struct AbilitiesComponent &, struct FallDistanceComponent &, struct PlayerInputRequestComponent &, struct SynchedActorDataComponent &, struct VanillaClientGameplayComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>);

};
