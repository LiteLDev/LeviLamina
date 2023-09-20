/**
 * @file  PendingRemovePassengersSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace PendingRemovePassengersSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?pendingRemovePassengers\@PendingRemovePassengersSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UVehicleComponent\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEAUPendingRemovePassengersComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@UPendingRemovePassengersComponent\@\@URemovePassengersComponent\@\@\@\@\@Z
     */
    MCAPI void pendingRemovePassengers(struct entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct VehicleComponent>>, class StrictEntityContext const &, struct PendingRemovePassengersComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, struct PendingRemovePassengersComponent, struct RemovePassengersComponent>);

};