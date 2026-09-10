#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/ScriptRuntimeType.h"

namespace ScriptPluginUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::string GetFileExtensionFromRuntimeType(::ScriptRuntimeType runtimeType);

MCNAPI ::ScriptRuntimeType GetRuntimeType(::std::string const& runtimeName);

MCNAPI ::ScriptRuntimeType GetRuntimeTypeFromFileExtension(::std::string const& fileExt);

MCNAPI ::std::string JavaScriptModuleNameNormalizer(
    ::std::string_view                  baseName,
    ::std::string const&                moduleName,
    ::std::vector<::std::string> const& knownModuleNames
);
// NOLINTEND

} // namespace ScriptPluginUtils
