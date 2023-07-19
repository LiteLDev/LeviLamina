/**
 * @file  VehicleServerPositionPassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VehicleServerPositionPassengerSystem.
 *
 */
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
     * @symbol ?_vehicleServerPositionPassengerSystemSingleEntity\@VehicleServerPositionPassengerSystem\@\@SAXAEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPassengerComponent\@\@UPositionPassengerRequestComponent\@\@\@\@$$CBUSynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPassengerComponent\@\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUActorHeadRotationComponent\@\@$$CBUPositionPassengerRequestComponent\@\@$$CBUSynchedActorDataComponent\@\@UActorRotationComponent\@\@UMobBodyRotationComponent\@\@UPassengerYRotLimitComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActorSetPositionRequestComponent\@\@\@\@V?$OptionalGlobalT\@UPassengersToPositionComponent\@\@VEntityRegistryBase\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBUActorRotationComponent\@\@$$CBUStateVectorComponent\@\@V?$Optional\@$$CBUActorSetPositionRequestComponent\@\@\@\@\@\@\@Z
     */
    MCAPI static void _vehicleServerPositionPassengerSystemSingleEntity(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent, struct PositionPassengerRequestComponent>, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent, class FlagComponent<struct MobFlag>>, struct ActorHeadRotationComponent const, struct PositionPassengerRequestComponent const, struct SynchedActorDataComponent const, struct ActorRotationComponent, struct MobBodyRotationComponent, struct PassengerYRotLimitComponent, class Optional<class FlagComponent<struct PlayerComponentFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ActorSetPositionRequestComponent>, class OptionalGlobalT<struct PassengersToPositionComponent, class EntityRegistryBase>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>, struct ActorRotationComponent const, struct StateVectorComponent const, class Optional<struct ActorSetPositionRequestComponent const>>);
    /**
     * @symbol ?createSystem\@VehicleServerPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
