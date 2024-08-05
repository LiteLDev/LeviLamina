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
getEditorModuleFilter(bool);

MCAPI std::function<
    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>
getGameTestModuleFilter(bool);

MCAPI std::function<
    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>
getReleaseModuleFilter(bool, bool);
// NOLINTEND

}; // namespace ScriptModuleFilters
