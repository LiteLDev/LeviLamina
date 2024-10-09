#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

namespace ActorRiding {
// NOLINTBEGIN
MCAPI void clearVehiclePrev(class EntityContext& provider);

MCAPI class StrictEntityContext getPassengerClosestTo(
    class Vec3 const&                                                                pos,
    struct VehicleComponent const&                                                   vehicle,
    class ViewT<class StrictEntityContext, struct StateVectorComponent const> const& positions
);

MCAPI std::vector<struct StrictActorIDEntityContextPair> const& getPassengers(class EntityContext const& provider);

MCAPI std::vector<struct StrictActorIDEntityContextPair> const&
      getPendingRemovePassengers(class EntityContext const& provider);

MCAPI struct ActorUniqueID getVehicleID(class EntityContext const& provider);

MCAPI class StrictEntityContext getVehiclePrevEntity(class EntityContext const& provider);

MCAPI bool isPassenger(class EntityContext const& provider);

MCAPI void setPassengersChanged(class EntityContext& provider, bool haveChanged);

MCAPI void setVehicle(
    class EntityContext&        provider,
    class StrictEntityContext   vehicleContext,
    struct ActorUniqueID const& vehicleID
);
// NOLINTEND

}; // namespace ActorRiding
