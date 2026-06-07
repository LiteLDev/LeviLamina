#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/FilterResult.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class ScriptPackConfigurationManager;
class ScriptPluginResult;
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleFilters {
// functions
// NOLINTBEGIN
MCNAPI ::std::function<
    ::ScriptModuleFilters::FilterResult(
        ::PackManifest const&,
        ::Scripting::ModuleDescriptor const&,
        ::Scripting::ModuleDescriptor const&,
        ::ScriptPluginResult&
    )>
getEditorModuleFilter(bool isEditorWorld);

MCNAPI ::std::function<
    ::ScriptModuleFilters::FilterResult(
        ::PackManifest const&,
        ::Scripting::ModuleDescriptor const&,
        ::Scripting::ModuleDescriptor const&,
        ::ScriptPluginResult&
    )>
getGameTestModuleFilter(bool betaAPIsEnabled);

MCNAPI ::std::function<
    ::ScriptModuleFilters::FilterResult(
        ::PackManifest const&,
        ::Scripting::ModuleDescriptor const&,
        ::Scripting::ModuleDescriptor const&,
        ::ScriptPluginResult&
    )>
getModulePermissionsFilter(::ScriptPackConfigurationManager const& packConfigManager);

MCNAPI ::std::function<
    ::ScriptModuleFilters::FilterResult(
        ::PackManifest const&,
        ::Scripting::ModuleDescriptor const&,
        ::Scripting::ModuleDescriptor const&,
        ::ScriptPluginResult&
    )>
getReleaseModuleFilter(bool betaAPIsEnabled, bool disallowInternalApisOutsideAppPackage);

MCNAPI ::std::function<
    ::ScriptModuleFilters::FilterResult(
        ::PackManifest const&,
        ::Scripting::ModuleDescriptor const&,
        ::Scripting::ModuleDescriptor const&,
        ::ScriptPluginResult&
    )>
getServerNetModuleFilter(bool isNonPublishOrHeadless, bool isEditorWorld);
// NOLINTEND

} // namespace ScriptModuleFilters
