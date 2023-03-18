/**
 * @file  VehicleClientPositionPassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VehicleClientPositionPassengerSystem.
 *
 */
class VehicleClientPositionPassengerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLECLIENTPOSITIONPASSENGERSYSTEM
public:
    class VehicleClientPositionPassengerSystem& operator=(class VehicleClientPositionPassengerSystem const &) = delete;
    VehicleClientPositionPassengerSystem(class VehicleClientPositionPassengerSystem const &) = delete;
    VehicleClientPositionPassengerSystem() = delete;
#endif

public:
    /**
     * @symbol ?_setRotationLockSystem\@VehicleClientPositionPassengerSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUSynchedActorDataComponent\@\@$$CBUActorHeadRotationComponent\@\@UMobBodyRotationComponent\@\@UPassengerYRotLimitComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBURenderRotationComponent\@\@\@\@V?$OptionalGlobalT\@UPassengersToPositionComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
     */
    MCAPI static void _setRotationLockSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct SynchedActorDataComponent const, struct ActorHeadRotationComponent const, struct MobBodyRotationComponent, struct PassengerYRotLimitComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct RenderRotationComponent const>, class OptionalGlobalT<struct PassengersToPositionComponent, class EntityRegistryBase>);
    /**
     * @symbol ?createSetPositionRequestSystem\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPositionRequestSystem();
    /**
     * @symbol ?createSetPreviousPosRotSystem\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPreviousPosRotSystem();
    /**
     * @symbol ?createSetRotationLock\@VehicleClientPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetRotationLock();

};
