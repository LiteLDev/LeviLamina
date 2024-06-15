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
    // ?getOrCreatePluginResults@ScriptPluginManagerResult@@QEAAAEAVScriptPluginResult@@UPackIdVersion@@AEBUModuleDescriptor@Scripting@@@Z
    MCAPI class ScriptPluginResult&
    getOrCreatePluginResults(struct PackIdVersion, struct Scripting::ModuleDescriptor const&);

    // symbol: ?logMessages@ScriptPluginManagerResult@@QEBAXXZ
    MCAPI void logMessages() const;

    // symbol: ?logPlugins@ScriptPluginManagerResult@@QEBAXXZ
    MCAPI void logPlugins() const;

    // symbol: ??1ScriptPluginManagerResult@@QEAA@XZ
    MCAPI ~ScriptPluginManagerResult();

    // NOLINTEND
};
