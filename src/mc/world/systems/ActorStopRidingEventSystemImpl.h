#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
template<typename... T0> struct Include;
// clang-format on

namespace ActorStopRidingEventSystemImpl {
/**
 * @symbol
 * ?tickHandlerEvent\@ActorStopRidingEventSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEBVActorOwnerComponent\@\@AEBUPassengerComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBVActorOwnerComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@Z
 */
MCAPI void
tickHandlerEvent(struct entt::type_list<struct Include<class FlagComponent<struct StopRidingRequestFlag>>>, class StrictEntityContext const&, class ActorOwnerComponent const&, struct PassengerComponent const&, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>, class Optional<class FlagComponent<struct SwitchingVehiclesFlag> const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>, class ActorOwnerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StopRidingRequestFlag>>); // NOLINT
/**
 * @symbol
 * ?tickListenerEvent\@ActorStopRidingEventSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@entt\@\@AEBVActorOwnerComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@\@Z
 */
MCAPI void tickListenerEvent(struct entt::type_list<struct Include<class FlagComponent<struct StopRidingRequestFlag>>>, class ActorOwnerComponent const&, class Optional<class FlagComponent<struct LocalPlayerComponentFlag> const>, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>, class Optional<class FlagComponent<struct SwitchingVehiclesFlag> const>); // NOLINT

}; // namespace ActorStopRidingEventSystemImpl
