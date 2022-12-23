/**
 * @file  StandingVehiclePostPositionPassengerSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol ?_impl@StandingVehiclePostPositionPassengerSystem@@SAXAEAVStrictEntityContext@@AEBUPassengerComponent@@AEAUActorSetPositionRequestComponent@@V?$Optional@UMobBodyRotationComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UHorseFlag@@@@@@$$CBUStandAnimationComponent@@$$CBURenderRotationComponent@@U?$Include@UVehicleComponent@@@@$$CBURenderPositionComponent@@@@@Z
     * @hash   247743833
     */
    MCAPI static void _impl(class StrictEntityContext &, struct PassengerComponent const &, struct ActorSetPositionRequestComponent &, class Optional<struct MobBodyRotationComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const, struct RenderRotationComponent const, struct Include<struct VehicleComponent>, struct RenderPositionComponent const>);
    /**
     * @symbol ?createSystem@StandingVehiclePostPositionPassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1441808094
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};