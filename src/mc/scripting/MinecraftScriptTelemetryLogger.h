#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptTelemetryLogger.h"

class MinecraftScriptTelemetryLogger : public ::IScriptTelemetryLogger {
public:
    // prevent constructor by default
    MinecraftScriptTelemetryLogger& operator=(MinecraftScriptTelemetryLogger const&);
    MinecraftScriptTelemetryLogger(MinecraftScriptTelemetryLogger const&);
    MinecraftScriptTelemetryLogger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MinecraftScriptTelemetryLogger@@UEAA@XZ
    virtual ~MinecraftScriptTelemetryLogger() = default;

    // vIndex: 1, symbol: ?onPluginDiscovery@MinecraftScriptTelemetryLogger@@UEAAXAEBVScriptPluginResult@@@Z
    virtual void onPluginDiscovery(class ScriptPluginResult const&);

    // vIndex: 2, symbol:
    // ?onPluginRun@MinecraftScriptTelemetryLogger@@UEAAXAEBVScriptPluginResult@@V?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@@Z
    virtual void onPluginRun(class ScriptPluginResult const&, std::chrono::microseconds);

    // vIndex: 3, symbol: ?onDebuggerListen@MinecraftScriptTelemetryLogger@@UEAAXXZ
    virtual void onDebuggerListen();

    // vIndex: 4, symbol: ?onDebuggerConnect@MinecraftScriptTelemetryLogger@@UEAAXXZ
    virtual void onDebuggerConnect();

    // symbol: ??0MinecraftScriptTelemetryLogger@@QEAA@AEAVIMinecraftEventing@@_N@Z
    MCAPI MinecraftScriptTelemetryLogger(class IMinecraftEventing& eventing, bool);

    // NOLINTEND
};
