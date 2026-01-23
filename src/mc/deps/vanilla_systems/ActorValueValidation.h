#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace VanillaSystems { struct VanillaSystemsEventingComponent; }
// clang-format on

namespace VanillaSystems::ActorValueValidation {
// functions
// NOLINTBEGIN
MCNAPI bool validateVec3Position(
    ::Vec3 const&                                                        pos,
    char const*                                                          caller,
    ::OptionalGlobal<::VanillaSystems::VanillaSystemsEventingComponent>& eventingComponent
);
// NOLINTEND

} // namespace VanillaSystems::ActorValueValidation
