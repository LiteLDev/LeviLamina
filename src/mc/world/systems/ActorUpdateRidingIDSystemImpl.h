#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename... T0> struct Include;
// clang-format on

namespace ActorUpdateRidingIDSystemImpl {
/**
 * @symbol
 * ?updateRidingPrevID\@ActorUpdateRidingIDSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUVehicleComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@URidingPrevIDComponent\@\@\@\@\@Z
 */
MCAPI void
updateRidingPrevID(struct entt::type_list<struct Include<class FlagComponent<struct StopRidingRequestFlag>>>, class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RidingPrevIDComponent>);

}; // namespace ActorUpdateRidingIDSystemImpl
