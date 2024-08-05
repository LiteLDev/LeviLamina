#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

namespace ActorRiding {
// NOLINTBEGIN
MCAPI void clearVehiclePrev(class EntityContext& provider);

MCAPI class StrictEntityContext
getPassengerClosestTo(class Vec3 const&, struct VehicleComponent const&, class ViewT<class StrictEntityContext, struct StateVectorComponent const> const&);

MCAPI std::vector<struct StrictActorIDEntityContextPair> const& getPassengers(class EntityContext const& provider);

MCAPI std::vector<struct StrictActorIDEntityContextPair> const&
      getPendingRemovePassengers(class EntityContext const& provider);

MCAPI struct ActorUniqueID getVehicleID(class EntityContext const& provider);

MCAPI class StrictEntityContext getVehiclePrevEntity(class EntityContext const& provider);

MCAPI bool isPassenger(class EntityContext const&);

MCAPI void setPassengersChanged(class EntityContext& provider, bool);

MCAPI void setVehicle(class EntityContext& provider, class StrictEntityContext, struct ActorUniqueID const&);
// NOLINTEND

}; // namespace ActorRiding
