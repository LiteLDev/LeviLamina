#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ScriptEngine; }
// clang-format on

namespace ScriptDiagnosticsCollectors {
// NOLINTBEGIN
// symbol: ?AddDynamicPropertiesCollector@ScriptDiagnosticsCollectors@@YAXAEAVScriptDiagnostics@@AEAVLevel@@@Z
MCAPI void AddDynamicPropertiesCollector(class ScriptDiagnostics&, class Level&);

// symbol:
// ?AddJavaScriptRuntimeCollector@ScriptDiagnosticsCollectors@@YAXAEAVScriptDiagnostics@@AEAVScriptEngine@Scripting@@@Z
MCAPI void AddJavaScriptRuntimeCollector(class ScriptDiagnostics&, class Scripting::ScriptEngine&);

// symbol: ?AddPluginStatsCollector@ScriptDiagnosticsCollectors@@YAXAEAVScriptDiagnostics@@AEAVScriptPluginManager@@@Z
MCAPI void AddPluginStatsCollector(class ScriptDiagnostics&, class ScriptPluginManager&);
// NOLINTEND

}; // namespace ScriptDiagnosticsCollectors
