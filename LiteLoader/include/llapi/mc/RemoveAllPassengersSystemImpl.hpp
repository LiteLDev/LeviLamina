/**
 * @file  RemoveAllPassengersSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace RemoveAllPassengersSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?tickRemoveAllPassengers\@RemoveAllPassengersSystemImpl\@\@YAXAEBUVehicleComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void tickRemoveAllPassengers(struct VehicleComponent const &, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>> &);

};