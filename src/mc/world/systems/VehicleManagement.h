#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
struct EntitySystemTickingMode;
// clang-format on

namespace VanillaSystemsRegistration::VehicleManagement {
// NOLINTBEGIN
// symbol:
// ?registerExitVehicle@VehicleManagement@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@2@@Z
MCAPI void registerExitVehicle(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol:
// ?registerPassengerTick@VehicleManagement@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@2@@Z
MCAPI void registerPassengerTick(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

// symbol:
// ?registerRemovePassengerSystems@VehicleManagement@VanillaSystemsRegistration@@YAXAEAVEntitySystems@@AEBURegistrationOptions@2@UEntitySystemTickingMode@@@Z
MCAPI void registerRemovePassengerSystems(
    class EntitySystems&,
    struct VanillaSystemsRegistration::RegistrationOptions const&,
    struct EntitySystemTickingMode
);
// NOLINTEND

}; // namespace VanillaSystemsRegistration::VehicleManagement
