#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

namespace CommandPermissionLevelConversion {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCAPI ::std::optional<::CommandPermissionLevel> fromString(::std::string const& commandPermLevel);
#endif

MCAPI ::std::string toString(::CommandPermissionLevel commandPermLevel);
// NOLINTEND

} // namespace CommandPermissionLevelConversion
