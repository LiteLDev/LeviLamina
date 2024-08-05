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
MCAPI void registerExitVehicle(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void registerPassengerTick(class EntitySystems&, struct VanillaSystemsRegistration::RegistrationOptions const&);

MCAPI void registerRemovePassengerSystems(
    class EntitySystems&,
    struct VanillaSystemsRegistration::RegistrationOptions const&,
    struct EntitySystemTickingMode
);
// NOLINTEND

}; // namespace VanillaSystemsRegistration::VehicleManagement
