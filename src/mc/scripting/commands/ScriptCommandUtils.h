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
MCAPI bool CommandResultShouldThrow(::MCRESULT commandResult);

MCAPI ::CurrentCmdVersion ContextConfigToCommandVersion(::Scripting::ContextConfig const& contextConfig);

MCAPI int ContextConfigToCommandVersionValue(::Scripting::ContextConfig const& contextConfig);
// NOLINTEND

} // namespace ScriptCommandUtils
