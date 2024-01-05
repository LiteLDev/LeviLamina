#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptPluginManagerResult {
public:
    // prevent constructor by default
    ScriptPluginManagerResult& operator=(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getOrCreatePluginResults@ScriptPluginManagerResult@@QEAAAEAVScriptPluginResult@@AEBUModuleDescriptor@Scripting@@@Z
    MCAPI class ScriptPluginResult& getOrCreatePluginResults(struct Scripting::ModuleDescriptor const& descriptor);

    // symbol: ?writeToContentLog@ScriptPluginManagerResult@@QEBAXXZ
    MCAPI void writeToContentLog() const;

    // symbol: ??1ScriptPluginManagerResult@@QEAA@XZ
    MCAPI ~ScriptPluginManagerResult();

    // NOLINTEND
};
