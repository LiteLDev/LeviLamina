#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinecraftScriptTelemetryLogger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTSCRIPTTELEMETRYLOGGER
public:
    MinecraftScriptTelemetryLogger& operator=(MinecraftScriptTelemetryLogger const&) = delete;
    MinecraftScriptTelemetryLogger(MinecraftScriptTelemetryLogger const&)            = delete;
    MinecraftScriptTelemetryLogger()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onPluginDiscovery\@MinecraftScriptTelemetryLogger\@\@UEAAXAEBVScriptPluginResult\@\@\@Z
     */
    virtual void onPluginDiscovery(class ScriptPluginResult const&);
    /**
     * @vftbl 2
     * @symbol
     * ?onPluginRun\@MinecraftScriptTelemetryLogger\@\@UEAAXAEBVScriptPluginResult\@\@V?$duration\@_JU?$ratio\@$00$0PECEA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual void
    onPluginRun(class ScriptPluginResult const&, class std::chrono::duration<__int64, struct std::ratio<1, 1000000>>);
    /**
     * @vftbl 3
     * @symbol ?onDebuggerListen\@MinecraftScriptTelemetryLogger\@\@UEAAXXZ
     */
    virtual void onDebuggerListen();
    /**
     * @vftbl 4
     * @symbol ?onDebuggerConnect\@MinecraftScriptTelemetryLogger\@\@UEAAXXZ
     */
    virtual void onDebuggerConnect();
    /**
     * @symbol ??0MinecraftScriptTelemetryLogger\@\@QEAA\@AEAVIMinecraftEventing\@\@_N\@Z
     */
    MCAPI MinecraftScriptTelemetryLogger(class IMinecraftEventing&, bool);
};
