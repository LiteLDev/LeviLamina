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
MCNAPI ::TickingSystemWithInfo createAntiCheatSystem(::TickingSystemWithInfo system);

MCNAPI ::TickingSystemWithInfo
createAuthorityDependentSystem(::TickingSystemWithInfo system, ::AuthorityDependentSystem::MovementFilter requiredMode);

MCNAPI ::TickingSystemWithInfo createClientAuthoritativeSystem(::TickingSystemWithInfo system);

MCNAPI ::TickingSystemWithInfo createNotAntiCheatSystem(::TickingSystemWithInfo system);

MCNAPI ::TickingSystemWithInfo createNotClientAuthoritativeSystem(::TickingSystemWithInfo system);
// NOLINTEND

} // namespace AuthorityDependentSystem
