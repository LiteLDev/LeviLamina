/**
 * @file  PendingRemovePassengersSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PendingRemovePassengersSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PENDINGREMOVEPASSENGERSSYSTEMIMPL
public:
    class PendingRemovePassengersSystemImpl& operator=(class PendingRemovePassengersSystemImpl const &) = delete;
    PendingRemovePassengersSystemImpl(class PendingRemovePassengersSystemImpl const &) = delete;
    PendingRemovePassengersSystemImpl() = delete;
#endif

public:
    /**
     * @symbol ?pendingRemovePassengersSystem\@PendingRemovePassengersSystemImpl\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@$$CBUVehicleComponent\@\@$$CBUPendingRemovePassengersComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPendingRemovePassengersComponent\@\@URemovePassengersComponent\@\@\@\@\@Z
     */
    MCAPI static void pendingRemovePassengersSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct VehicleComponent const, struct PendingRemovePassengersComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent, struct RemovePassengersComponent>);

};
