#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinecraftScriptTelemetryLogger {

public:
    // prevent constructor by default
    MinecraftScriptTelemetryLogger& operator=(MinecraftScriptTelemetryLogger const&) = delete;
    MinecraftScriptTelemetryLogger(MinecraftScriptTelemetryLogger const&)            = delete;
    MinecraftScriptTelemetryLogger()                                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?onPluginDiscovery\@MinecraftScriptTelemetryLogger\@\@UEAAXAEBVScriptPluginResult\@\@\@Z
     */
    virtual void onPluginDiscovery(class ScriptPluginResult const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?onPluginRun\@MinecraftScriptTelemetryLogger\@\@UEAAXAEBVScriptPluginResult\@\@V?$duration\@_JU?$ratio\@$00$0PECEA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual void
    onPluginRun(class ScriptPluginResult const&, class std::chrono::duration<__int64, struct std::ratio<1, 1000000>>); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?onDebuggerListen\@MinecraftScriptTelemetryLogger\@\@UEAAXXZ
     */
    virtual void onDebuggerListen(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?onDebuggerConnect\@MinecraftScriptTelemetryLogger\@\@UEAAXXZ
     */
    virtual void onDebuggerConnect(); // NOLINT
    /**
     * @symbol ??0MinecraftScriptTelemetryLogger\@\@QEAA\@AEAVIMinecraftEventing\@\@_N\@Z
     */
    MCAPI MinecraftScriptTelemetryLogger(class IMinecraftEventing&, bool); // NOLINT
};
