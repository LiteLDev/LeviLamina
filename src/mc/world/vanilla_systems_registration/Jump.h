#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

namespace VanillaSystemsRegistration::Jump {
// functions
// NOLINTBEGIN
MCAPI void registerNormalJumpSystems(
    ::EntitySystems&                                         systemRegistry,
    ::VanillaSystemsRegistration::RegistrationOptions const& options
);

MCAPI void registerPowerJumpSystems(::EntitySystems& systemRegistry);
// NOLINTEND

} // namespace VanillaSystemsRegistration::Jump
