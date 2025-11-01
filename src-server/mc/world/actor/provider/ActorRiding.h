#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class StrictEntityContext;
class Vec3;
struct StateVectorComponent;
struct StrictActorIDEntityContextPair;
struct VehicleComponent;
// clang-format on

namespace ActorRiding {
// functions
// NOLINTBEGIN
MCNAPI ::StrictEntityContext getPassengerClosestTo(::Vec3 const& pos, ::VehicleComponent const& vehicle, ::ViewT<::StrictEntityContext, ::StateVectorComponent const> const& positions);

MCNAPI ::std::vector<::StrictActorIDEntityContextPair> const& getPassengers(::EntityContext const& provider);
// NOLINTEND

}
