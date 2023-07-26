#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptPluginManagerResult {

public:
    // prevent constructor by default
    ScriptPluginManagerResult& operator=(ScriptPluginManagerResult const&) = delete;
    ScriptPluginManagerResult(ScriptPluginManagerResult const&)            = delete;
    ScriptPluginManagerResult()                                            = delete;

public:
    /**
     * @symbol
     * ?getOrCreatePluginResults\@ScriptPluginManagerResult\@\@QEAAAEAVScriptPluginResult\@\@AEBUModuleDescriptor\@Scripting\@\@\@Z
     */
    MCAPI class ScriptPluginResult& getOrCreatePluginResults(struct Scripting::ModuleDescriptor const&); // NOLINT
    /**
     * @symbol ?writeToContentLog\@ScriptPluginManagerResult\@\@QEBAXXZ
     */
    MCAPI void writeToContentLog() const; // NOLINT
    /**
     * @symbol ??1ScriptPluginManagerResult\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPluginManagerResult(); // NOLINT
};
