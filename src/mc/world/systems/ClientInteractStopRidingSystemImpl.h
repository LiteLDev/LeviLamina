#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename... T0> struct Exclude;
template<typename... T0> struct Include;
// clang-format on

namespace ClientInteractStopRidingSystemImpl {
/**
 * @symbol
 * ?tick\@ClientInteractStopRidingSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorRemovedFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEBUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURuntimeIDComponent\@\@\@\@\@Z
 */
MCAPI void
tick(struct entt::type_list<struct Include<class FlagComponent<struct LocalPlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorRemovedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class StrictEntityContext const&, struct PassengerComponent const&, struct StateVectorComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>, struct RuntimeIDComponent const>);

}; // namespace ClientInteractStopRidingSystemImpl
