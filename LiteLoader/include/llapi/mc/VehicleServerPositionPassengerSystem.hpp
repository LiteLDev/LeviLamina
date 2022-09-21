/**
 * @file  MC/VehicleServerPositionPassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class VehicleServerPositionPassengerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLESERVERPOSITIONPASSENGERSYSTEM
public:
    class VehicleServerPositionPassengerSystem& operator=(class VehicleServerPositionPassengerSystem const &) = delete;
    VehicleServerPositionPassengerSystem(class VehicleServerPositionPassengerSystem const &) = delete;
    VehicleServerPositionPassengerSystem() = delete;
#endif

public:
    /**
     * @symbol ?_rotateMobPassenger@VehicleServerPositionPassengerSystem@@SAXV?$ViewedEntityContextT@VStrictEntityContext@@$$CBUActorHeadRotationComponent@@$$CBUSynchedActorDataComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@UPassengerYRotLimitComponent@@@@V?$OptionalComponentWrapper@VStrictEntityContext@@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@@@AEBUActorRotationComponent@@@Z
     */
    MCAPI static void _rotateMobPassenger(class ViewedEntityContextT<class StrictEntityContext, struct ActorHeadRotationComponent const, struct SynchedActorDataComponent const, struct ActorRotationComponent, struct MobBodyRotationComponent, struct PassengerYRotLimitComponent>, class OptionalComponentWrapper<class StrictEntityContext, class FlagComponent<struct PlayerComponentFlag> const>, struct ActorRotationComponent const &);
    /**
     * @symbol ?createSystem@VehicleServerPositionPassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};