#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptTelemetryLogger.h"

// auto generated forward declare list
// clang-format off
class ScriptPluginManagerResult;
// clang-format on

class MinecraftScriptTelemetryLogger : public ::IScriptTelemetryLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2304b6;
    ::ll::UntypedStorage<8, 8> mUnk44caa9;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScriptTelemetryLogger& operator=(MinecraftScriptTelemetryLogger const&);
    MinecraftScriptTelemetryLogger(MinecraftScriptTelemetryLogger const&);
    MinecraftScriptTelemetryLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onPluginDiscovery(::ScriptPluginManagerResult const& pluginManagerResult) /*override*/;

    virtual void onPluginRun(::ScriptPluginManagerResult const& pluginManagerResult) /*override*/;

    virtual void onDebuggerListen(bool autoAttach) /*override*/;

    virtual void onDebuggerConnect(bool autoAttach, int retries) /*override*/;

    virtual ~MinecraftScriptTelemetryLogger() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onPluginDiscovery(::ScriptPluginManagerResult const& pluginManagerResult);

    MCNAPI void $onPluginRun(::ScriptPluginManagerResult const& pluginManagerResult);

    MCNAPI void $onDebuggerListen(bool autoAttach);

    MCNAPI void $onDebuggerConnect(bool autoAttach, int retries);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
