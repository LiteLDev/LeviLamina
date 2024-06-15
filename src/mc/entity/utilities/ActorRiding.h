#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

namespace ActorRiding {
// NOLINTBEGIN
// symbol: ?clearVehiclePrev@ActorRiding@@YAXAEAVEntityContext@@@Z
MCAPI void clearVehiclePrev(class EntityContext& provider);

// symbol:
// ?getPassengerClosestTo@ActorRiding@@YA?AVStrictEntityContext@@AEBVVec3@@AEBUVehicleComponent@@AEBV?$ViewT@VStrictEntityContext@@$$CBUStateVectorComponent@@@@@Z
MCAPI class StrictEntityContext
getPassengerClosestTo(class Vec3 const&, struct VehicleComponent const&, class ViewT<class StrictEntityContext, struct StateVectorComponent const> const&);

// symbol:
// ?getPassengers@ActorRiding@@YAAEBV?$vector@UStrictActorIDEntityContextPair@@V?$allocator@UStrictActorIDEntityContextPair@@@std@@@std@@AEBVEntityContext@@@Z
MCAPI std::vector<struct StrictActorIDEntityContextPair> const& getPassengers(class EntityContext const& provider);

// symbol:
// ?getPendingRemovePassengers@ActorRiding@@YAAEBV?$vector@UStrictActorIDEntityContextPair@@V?$allocator@UStrictActorIDEntityContextPair@@@std@@@std@@AEBVEntityContext@@@Z
MCAPI std::vector<struct StrictActorIDEntityContextPair> const&
      getPendingRemovePassengers(class EntityContext const& provider);

// symbol: ?getVehicleID@ActorRiding@@YA?AUActorUniqueID@@AEBVEntityContext@@@Z
MCAPI struct ActorUniqueID getVehicleID(class EntityContext const& provider);

// symbol: ?getVehiclePrevEntity@ActorRiding@@YA?AVStrictEntityContext@@AEBVEntityContext@@@Z
MCAPI class StrictEntityContext getVehiclePrevEntity(class EntityContext const& provider);

// symbol: ?isPassenger@ActorRiding@@YA_NAEBVEntityContext@@@Z
MCAPI bool isPassenger(class EntityContext const&);

// symbol: ?setPassengersChanged@ActorRiding@@YAXAEAVEntityContext@@_N@Z
MCAPI void setPassengersChanged(class EntityContext& provider, bool);

// symbol: ?setVehicle@ActorRiding@@YAXAEAVEntityContext@@VStrictEntityContext@@AEBUActorUniqueID@@@Z
MCAPI void setVehicle(class EntityContext& provider, class StrictEntityContext, struct ActorUniqueID const&);
// NOLINTEND

}; // namespace ActorRiding
