#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/ScriptRuntimeType.h"

// auto generated forward declare list
// clang-format off
class ScriptPlugin;
class SemVersion;
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptPluginUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCNAPI ::std::string GetFileExtensionFromRuntimeType(::ScriptRuntimeType runtimeType);
#endif

MCNAPI ::ScriptRuntimeType GetRuntimeType(::std::string const& runtimeName);

#ifdef LL_PLAT_S
MCNAPI ::ScriptRuntimeType GetRuntimeTypeFromFileExtension(::std::string const& fileExt);
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::string JavaScriptModuleNameNormalizer(
    ::std::string_view                  baseName,
    ::std::string const&                moduleName,
    ::std::vector<::std::string> const& knownModuleNames
);
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::string SanitizeRuntimeName(::std::string const& runtimeName);

MCNAPI ::Scripting::Version SemVersionToScriptVer(::SemVersion const& semVer);

MCNAPI ::std::vector<::std::string> ValidatePlugin(::ScriptPlugin const& plugin);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCNAPI ::std::unordered_map<::std::string, ::ScriptRuntimeType> const& FileExtToRuntimeType();
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::string const& JAVA_SCRIPT_RUNTIME_IDENTIFIER_V1();

MCNAPI ::std::string const& JAVA_SCRIPT_RUNTIME_IDENTIFIER_V2();
#endif
// NOLINTEND

} // namespace ScriptPluginUtils
