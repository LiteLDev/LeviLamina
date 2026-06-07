#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class WorldClockRegistryServer;
// clang-format on

namespace VanillaWorldClocks {
// functions
// NOLINTBEGIN
MCAPI void initWorldClocks(::WorldClockRegistryServer& registry);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::HashedString const& OVERWORLD_CLOCK_NAME();
// NOLINTEND

} // namespace VanillaWorldClocks
