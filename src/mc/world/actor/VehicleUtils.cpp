#include "mc/world/actor/VehicleUtils.h"
#include "mc/world/actor/Actor.h"

bool VehicleUtils::isPassengerOfActor(::Actor const& maybePassenger, ::ActorUniqueID const& actorID) {
    auto vehicle = maybePassenger.getVehicle();
    return vehicle && vehicle->getOrCreateUniqueID() == actorID;
}
