#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class StrictEntityContext;
class Vec3;
struct ActorUniqueID;
struct StateVectorComponent;
struct StrictActorIDEntityContextPair;
struct VehicleComponent;
// clang-format on

namespace ActorRiding {
// functions
// NOLINTBEGIN
MCAPI void clearVehiclePrev(::EntityContext& provider);

MCAPI ::StrictEntityContext getPassengerClosestTo(
    ::Vec3 const&                                                       pos,
    ::VehicleComponent const&                                           vehicle,
    ::ViewT<::StrictEntityContext, ::StateVectorComponent const> const& positions
);

MCAPI ::std::vector<::StrictActorIDEntityContextPair> const& getPassengers(::EntityContext const& provider);

MCAPI ::std::vector<::StrictActorIDEntityContextPair> const& getPendingRemovePassengers(::EntityContext const& provider
);

MCAPI ::ActorUniqueID getVehicleID(::EntityContext const& provider);

MCAPI ::StrictEntityContext getVehiclePrevEntity(::EntityContext const& provider);

MCAPI bool isPassenger(::EntityContext const& provider);

MCAPI void setPassengersChanged(::EntityContext& provider, bool haveChanged);

MCAPI void
setVehicle(::EntityContext& provider, ::StrictEntityContext vehicleContext, ::ActorUniqueID const& vehicleID);
// NOLINTEND

} // namespace ActorRiding
