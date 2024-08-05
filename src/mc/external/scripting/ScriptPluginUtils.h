#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptRuntimeType.h"

namespace ScriptPluginUtils {
// NOLINTBEGIN
MCAPI extern std::string const BETA_RELEASE;

MCAPI ::ScriptRuntimeType GetRuntimeType(std::string const&);

MCAPI ::ScriptRuntimeType GetRuntimeTypeFromFileExtension(std::string const&);

MCAPI extern std::string const INTERNAL_RELEASE;

MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_EXTENSION;

MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_NAME;

MCAPI std::string
      JavaScriptModuleNameNormalizer(std::string_view const&, std::string const&, std::vector<std::string> const&);

MCAPI std::vector<std::string> ValidatePlugin(class ScriptPlugin const&);
// NOLINTEND

}; // namespace ScriptPluginUtils
