#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/ScriptRuntimeType.h"

// auto generated forward declare list
// clang-format off
class ScriptPlugin;
// clang-format on

namespace ScriptPluginUtils {
// functions
// NOLINTBEGIN
MCNAPI ::ScriptRuntimeType GetRuntimeType(::std::string const& runtimeName);

MCNAPI ::ScriptRuntimeType GetRuntimeTypeFromFileExtension(::std::string const& fileExt);

MCNAPI ::std::string JavaScriptModuleNameNormalizer(
    ::std::string_view                  baseName,
    ::std::string const&                moduleName,
    ::std::vector<::std::string> const& knownModuleNames
);

MCNAPI ::std::string SanitizeRuntimeName(::std::string const& runtimeName);

MCNAPI ::std::vector<::std::string> ValidatePlugin(::ScriptPlugin const& plugin);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& BETA_RELEASE();

MCAPI ::std::string const& INTERNAL_RELEASE();

MCAPI ::std::string const& JAVA_SCRIPT_RUNTIME_EXTENSION();

MCAPI ::std::string const& JAVA_SCRIPT_RUNTIME_IDENTIFIER_V1();

MCAPI ::std::string const& JAVA_SCRIPT_RUNTIME_IDENTIFIER_V2();

MCAPI ::std::string const& JAVA_SCRIPT_RUNTIME_NAME();
// NOLINTEND

} // namespace ScriptPluginUtils
