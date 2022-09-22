/**
 * @file  VehicleClientPositionPassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


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
     * @symbol ?_setPositionRequest@VehicleClientPositionPassengerSystem@@SAXV?$ViewedEntityContextT@VStrictEntityContext@@$$CBUSynchedActorDataComponent@@@@V?$ViewedEntityContextT@VStrictEntityContext@@$$CBURenderPositionComponent@@$$CBURenderRotationComponent@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UActorSetPositionRequestComponent@@@@@Z
     */
    MCAPI static void _setPositionRequest(class ViewedEntityContextT<class StrictEntityContext, struct SynchedActorDataComponent const>, class ViewedEntityContextT<class StrictEntityContext, struct RenderPositionComponent const, struct RenderRotationComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ActorSetPositionRequestComponent>);
    /**
     * @symbol ?_setRotationLock@VehicleClientPositionPassengerSystem@@SAXV?$ViewedEntityContextT@VStrictEntityContext@@$$CBUSynchedActorDataComponent@@$$CBUActorHeadRotationComponent@@UMobBodyRotationComponent@@UPassengerYRotLimitComponent@@@@V?$ViewedEntityContextT@VStrictEntityContext@@$$CBURenderRotationComponent@@@@@Z
     */
    MCAPI static void _setRotationLock(class ViewedEntityContextT<class StrictEntityContext, struct SynchedActorDataComponent const, struct ActorHeadRotationComponent const, struct MobBodyRotationComponent, struct PassengerYRotLimitComponent>, class ViewedEntityContextT<class StrictEntityContext, struct RenderRotationComponent const>);
    /**
     * @symbol ?createSetPositionRequestSystem@VehicleClientPositionPassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPositionRequestSystem();
    /**
     * @symbol ?createSetPreviousPosRotSystem@VehicleClientPositionPassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetPreviousPosRotSystem();
    /**
     * @symbol ?createSetRotationLock@VehicleClientPositionPassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSetRotationLock();

};