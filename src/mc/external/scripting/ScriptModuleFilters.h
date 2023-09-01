#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleFilters {
// NOLINTBEGIN
// symbol:
// ?getEditorModuleFilter@ScriptModuleFilters@@YA?AV?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@_N@Z
MCAPI std::function<
    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>
getEditorModuleFilter(bool);

// symbol:
// ?getGameTestModuleFilter@ScriptModuleFilters@@YA?AV?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@_N@Z
MCAPI std::function<
    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>
getGameTestModuleFilter(bool);

// symbol:
// ?getReleaseModuleFilter@ScriptModuleFilters@@YA?AV?$function@$$A6A_NAEBVPackManifest@@AEBUModuleDescriptor@Scripting@@1AEAVScriptPluginResult@@@Z@std@@_N0@Z
MCAPI std::function<
    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)>
getReleaseModuleFilter(bool, bool);
// NOLINTEND

}; // namespace ScriptModuleFilters
