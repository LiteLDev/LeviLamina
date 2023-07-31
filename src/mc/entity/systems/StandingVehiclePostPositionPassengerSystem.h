#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class StandingVehiclePostPositionPassengerSystem {

public:
    // prevent constructor by default
    StandingVehiclePostPositionPassengerSystem& operator=(StandingVehiclePostPositionPassengerSystem const&) = delete;
    StandingVehiclePostPositionPassengerSystem(StandingVehiclePostPositionPassengerSystem const&)            = delete;
    StandingVehiclePostPositionPassengerSystem()                                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_impl\@StandingVehiclePostPositionPassengerSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEAUActorSetPositionRequestComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUStandAnimationComponent\@\@$$CBURenderRotationComponent\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURenderPositionComponent\@\@\@\@\@Z
     */
    MCAPI static void _impl(class StrictEntityContext&, struct PassengerComponent const&, struct ActorSetPositionRequestComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const, struct RenderRotationComponent const, struct Include<struct VehicleComponent>, struct RenderPositionComponent const>);
    /**
     * @symbol
     * ?_tick\@StandingVehiclePostPositionPassengerSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@$$CBUPassengerComponent\@\@UActorSetPositionRequestComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUStandAnimationComponent\@\@$$CBURenderRotationComponent\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURenderPositionComponent\@\@\@\@\@Z
     */
    MCAPI static void _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>, struct PassengerComponent const, struct ActorSetPositionRequestComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const, struct RenderRotationComponent const, struct Include<struct VehicleComponent>, struct RenderPositionComponent const>);
    /**
     * @symbol
     * ?_tickSingleEntity\@StandingVehiclePostPositionPassengerSystem\@\@SAXAEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPositionPassengerRequestComponent\@\@\@\@$$CBUPassengerComponent\@\@UActorSetPositionRequestComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUStandAnimationComponent\@\@$$CBURenderRotationComponent\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURenderPositionComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickSingleEntity(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PositionPassengerRequestComponent>, struct PassengerComponent const, struct ActorSetPositionRequestComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const, struct RenderRotationComponent const, struct Include<struct VehicleComponent>, struct RenderPositionComponent const>);
    /**
     * @symbol ?createSystem\@StandingVehiclePostPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    // NOLINTEND
};
