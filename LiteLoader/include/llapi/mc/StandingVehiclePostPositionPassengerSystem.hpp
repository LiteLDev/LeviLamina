/**
 * @file  StandingVehiclePostPositionPassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StandingVehiclePostPositionPassengerSystem.
 *
 */
class StandingVehiclePostPositionPassengerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STANDINGVEHICLEPOSTPOSITIONPASSENGERSYSTEM
public:
    class StandingVehiclePostPositionPassengerSystem& operator=(class StandingVehiclePostPositionPassengerSystem const &) = delete;
    StandingVehiclePostPositionPassengerSystem(class StandingVehiclePostPositionPassengerSystem const &) = delete;
    StandingVehiclePostPositionPassengerSystem() = delete;
#endif

public:
    /**
     * @symbol ?_impl\@StandingVehiclePostPositionPassengerSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEAUActorSetPositionRequestComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUStandAnimationComponent\@\@$$CBURenderRotationComponent\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURenderPositionComponent\@\@\@\@\@Z
     */
    MCAPI static void _impl(class StrictEntityContext &, struct PassengerComponent const &, struct ActorSetPositionRequestComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const, struct RenderRotationComponent const, struct Include<struct VehicleComponent>, struct RenderPositionComponent const>);
    /**
     * @symbol ?_tick\@StandingVehiclePostPositionPassengerSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@$$CBUPassengerComponent\@\@UActorSetPositionRequestComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUStandAnimationComponent\@\@$$CBURenderRotationComponent\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURenderPositionComponent\@\@\@\@\@Z
     */
    MCAPI static void _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>, struct PassengerComponent const, struct ActorSetPositionRequestComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const, struct RenderRotationComponent const, struct Include<struct VehicleComponent>, struct RenderPositionComponent const>);
    /**
     * @symbol ?_tickSingleEntity\@StandingVehiclePostPositionPassengerSystem\@\@SAXAEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@$$CBUPassengerComponent\@\@UActorSetPositionRequestComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUStandAnimationComponent\@\@$$CBURenderRotationComponent\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURenderPositionComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickSingleEntity(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>, struct PassengerComponent const, struct ActorSetPositionRequestComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const, struct RenderRotationComponent const, struct Include<struct VehicleComponent>, struct RenderPositionComponent const>);
    /**
     * @symbol ?createSystem\@StandingVehiclePostPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
