#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
struct SystemInfo;
struct TickingSystemWithInfo;
// clang-format on

namespace RunInitializersSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo create(::EntitySystems& systems);

MCAPI void gatherCombinedDependencies(::EntitySystems& systems, ::SystemInfo& resultInfo);
// NOLINTEND

} // namespace RunInitializersSystem
