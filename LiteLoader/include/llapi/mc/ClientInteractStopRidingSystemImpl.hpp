/**
 * @file  ClientInteractStopRidingSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ClientInteractStopRidingSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?tick\@ClientInteractStopRidingSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorRemovedFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEBUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURuntimeIDComponent\@\@\@\@\@Z
     */
    MCAPI void tick(struct entt::type_list<struct Include<class FlagComponent<struct LocalPlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorRemovedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class StrictEntityContext const &, struct PassengerComponent const &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>, struct RuntimeIDComponent const>);

};