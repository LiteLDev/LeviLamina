#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptCommandUtils {
// functions
// NOLINTBEGIN
MCNAPI bool CommandResultShouldThrow(::MCRESULT commandResult);

MCNAPI ::CurrentCmdVersion ContextConfigToCommandVersion(::Scripting::ContextConfig const& contextConfig);

MCNAPI int ContextConfigToCommandVersionValue(::Scripting::ContextConfig const& contextConfig);
// NOLINTEND

} // namespace ScriptCommandUtils
