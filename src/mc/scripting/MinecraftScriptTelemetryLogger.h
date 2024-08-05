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
    // vIndex: 0
    virtual ~MinecraftScriptTelemetryLogger() = default;

    // vIndex: 1
    virtual void onPluginDiscovery(class ScriptPluginResult const&);

    // vIndex: 2
    virtual void onPluginRun(class ScriptPluginResult const&, std::chrono::microseconds);

    // vIndex: 3
    virtual void onDebuggerListen();

    // vIndex: 4
    virtual void onDebuggerConnect();

    MCAPI MinecraftScriptTelemetryLogger(class IMinecraftEventing& eventing, bool);

    // NOLINTEND
};
