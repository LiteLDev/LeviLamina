#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"

namespace ScriptCommandUtils {
// NOLINTBEGIN
MCAPI bool CommandResultShouldThrow(struct MCRESULT);

MCAPI ::CurrentCmdVersion EngineVersionToCommandVersion(std::string const&);

MCAPI int EngineVersionToCommandVersionValue(std::string const&);
// NOLINTEND

}; // namespace ScriptCommandUtils
