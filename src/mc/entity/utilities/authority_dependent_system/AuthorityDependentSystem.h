#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/authority_dependent_system/MovementFilter.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace AuthorityDependentSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createAntiCheatSystem(::TickingSystemWithInfo system);

MCAPI ::TickingSystemWithInfo
createAuthorityDependentSystem(::TickingSystemWithInfo system, ::AuthorityDependentSystem::MovementFilter requiredMode);

MCAPI ::TickingSystemWithInfo createClientAuthoritativeSystem(::TickingSystemWithInfo system);

MCAPI ::TickingSystemWithInfo createNotAntiCheatSystem(::TickingSystemWithInfo system);

MCAPI ::TickingSystemWithInfo createNotClientAuthoritativeSystem(::TickingSystemWithInfo system);
// NOLINTEND

} // namespace AuthorityDependentSystem
