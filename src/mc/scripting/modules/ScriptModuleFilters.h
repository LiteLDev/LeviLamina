#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleFilters {
// NOLINTBEGIN
MCAPI std::function<
    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>
getEditorModuleFilter(bool isEditorWorld);

MCAPI std::function<
    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>
getGameTestModuleFilter(bool betaAPIsEnabled);

MCAPI std::function<
    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>
getReleaseModuleFilter(bool betaAPIsEnabled, bool disallowInternalApisOutsideAppPackage);
// NOLINTEND

}; // namespace ScriptModuleFilters
