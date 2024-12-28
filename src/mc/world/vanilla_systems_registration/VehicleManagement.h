#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct EntitySystemTickingMode;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

namespace VanillaSystemsRegistration::VehicleManagement {
// functions
// NOLINTBEGIN
MCAPI void
registerExitVehicle(::EntitySystems& systemRegistry, ::VanillaSystemsRegistration::RegistrationOptions const& options);

MCAPI void registerPassengerTick(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerRemovePassengerSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options,
    ::EntitySystemTickingMode                                tickingMode
);
// NOLINTEND

} // namespace VanillaSystemsRegistration::VehicleManagement
