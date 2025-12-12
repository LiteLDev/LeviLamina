#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v3_0_0/pack_manifest/VersionSelectType.h"
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
MCNAPI ::ScriptRuntimeType GetRuntimeType(::std::string const& runtimeName);

MCNAPI ::ScriptRuntimeType GetRuntimeTypeFromFileExtension(::std::string const& fileExt);

MCNAPI ::std::string JavaScriptModuleNameNormalizer(
    ::std::string_view                  baseName,
    ::std::string const&                moduleName,
    ::std::vector<::std::string> const& knownModuleNames
);

MCNAPI ::std::string SanitizeRuntimeName(::std::string const& runtimeName);

MCNAPI ::Scripting::Version SemVersionToScriptVer(::SemVersion const& semVer);

MCNAPI ::std::vector<::std::string> ValidatePlugin(::ScriptPlugin const& plugin);

MCNAPI ::std::string_view
VersionSelectorToPreReleaseTag(::SharedTypes::v3_0_0::PackManifestDefinition::VersionSelectType versionSelector);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& INTERNAL_RELEASE();

MCNAPI ::std::string const& JAVA_SCRIPT_RUNTIME_EXTENSION();

MCNAPI ::std::string const& JAVA_SCRIPT_RUNTIME_IDENTIFIER_V1();

MCNAPI ::std::string const& JAVA_SCRIPT_RUNTIME_IDENTIFIER_V2();

MCNAPI ::std::string const& JAVA_SCRIPT_RUNTIME_NAME();
// NOLINTEND

} // namespace ScriptPluginUtils
