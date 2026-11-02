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
MCNAPI ::StrictEntityContext getPassengerClosestTo(
    ::Vec3 const&                                                       pos,
    ::VehicleComponent const&                                           vehicle,
    ::ViewT<::StrictEntityContext, ::StateVectorComponent const> const& positions
);

MCAPI ::std::vector<::StrictActorIDEntityContextPair> const& getPassengers(::EntityContext const& provider);

MCNAPI bool isControlled(::EntityContext const& provider);

MCNAPI bool isPassenger(::EntityContext const& provider);

MCNAPI void
setVehicle(::EntityContext& provider, ::StrictEntityContext vehicleContext, ::ActorUniqueID const& vehicleID);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::vector<::StrictActorIDEntityContextPair> const& STRICTACTORIDENTITYCONTEXTPAIR_EMPTY_VECTOR();
// NOLINTEND

} // namespace ActorRiding
