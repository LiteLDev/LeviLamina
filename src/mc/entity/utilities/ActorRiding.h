#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorRiding {
/**
 * @symbol ?clearVehiclePrev\@ActorRiding\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void clearVehiclePrev(class EntityContext&); // NOLINT
/**
 * @symbol
 * ?getPassengers\@ActorRiding\@\@YAAEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI std::vector<struct StrictActorIDEntityContextPair> const& getPassengers(class EntityContext const&); // NOLINT
/**
 * @symbol
 * ?getPendingRemovePassengers\@ActorRiding\@\@YAAEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI std::vector<struct StrictActorIDEntityContextPair> const&
      getPendingRemovePassengers(class EntityContext const&); // NOLINT
/**
 * @symbol ?getVehicleID\@ActorRiding\@\@YA?AUActorUniqueID\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI struct ActorUniqueID getVehicleID(class EntityContext const&); // NOLINT
/**
 * @symbol ?getVehiclePrevEntity\@ActorRiding\@\@YA?AVStrictEntityContext\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class StrictEntityContext getVehiclePrevEntity(class EntityContext const&); // NOLINT
/**
 * @symbol ?removePassengerFromList\@ActorRiding\@\@YAXAEAVEntityContext\@\@AEBUActorUniqueID\@\@\@Z
 */
MCAPI void removePassengerFromList(class EntityContext&, struct ActorUniqueID const&); // NOLINT
/**
 * @symbol ?setPassengersChanged\@ActorRiding\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setPassengersChanged(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setVehicle\@ActorRiding\@\@YAXAEAVEntityContext\@\@VStrictEntityContext\@\@AEBUActorUniqueID\@\@\@Z
 */
MCAPI void setVehicle(class EntityContext&, class StrictEntityContext, struct ActorUniqueID const&); // NOLINT
/**
 * @symbol
 * ?tryRemoveLastPendingPassenger\@ActorRiding\@\@YA?AUStrictActorIDEntityContextPair\@\@AEAVEntityContext\@\@\@Z
 */
MCAPI struct StrictActorIDEntityContextPair tryRemoveLastPendingPassenger(class EntityContext&); // NOLINT

}; // namespace ActorRiding
