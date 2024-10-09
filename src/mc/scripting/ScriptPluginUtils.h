#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/ScriptRuntimeType.h"

namespace ScriptPluginUtils {
// NOLINTBEGIN
MCAPI extern std::string const BETA_RELEASE;

MCAPI ::ScriptRuntimeType GetRuntimeType(std::string const& runtimeName);

MCAPI ::ScriptRuntimeType GetRuntimeTypeFromFileExtension(std::string const& fileExt);

MCAPI extern std::string const INTERNAL_RELEASE;

MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_EXTENSION;

MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_NAME;

MCAPI std::string JavaScriptModuleNameNormalizer(
    std::string_view const&         baseName,
    std::string const&              moduleName,
    std::vector<std::string> const& knownModuleNames
);

MCAPI std::vector<std::string> ValidatePlugin(class ScriptPlugin const& plugin);
// NOLINTEND

}; // namespace ScriptPluginUtils
