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
MCAPI void registerExitVehicle(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerPassengerTick(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerRemovePassengerSystems(
    class EntitySystems&                                          systemRegistry,
    struct VanillaSystemsRegistration::RegistrationOptions const& options,
    struct EntitySystemTickingMode                                tickingMode
);
// NOLINTEND

}; // namespace VanillaSystemsRegistration::VehicleManagement
