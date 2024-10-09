#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

namespace ScriptCommandUtils {
// NOLINTBEGIN
MCAPI bool CommandResultShouldThrow(struct MCRESULT commandResult);

MCAPI ::CurrentCmdVersion EngineVersionToCommandVersion(std::string const& engineVersionStr);

MCAPI int EngineVersionToCommandVersionValue(std::string const& engineVersionStr);
// NOLINTEND

}; // namespace ScriptCommandUtils
