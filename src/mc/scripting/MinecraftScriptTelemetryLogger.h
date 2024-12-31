#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/IScriptTelemetryLogger.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
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
    // vIndex: 1
    virtual void onPluginDiscovery(::ScriptPluginManagerResult const& pluginManagerResult) /*override*/;

    // vIndex: 2
    virtual void onPluginRun(::ScriptPluginManagerResult const& pluginManagerResult) /*override*/;

    // vIndex: 3
    virtual void onDebuggerListen(bool autoAttach) /*override*/;

    // vIndex: 4
    virtual void onDebuggerConnect(bool autoAttach, int retries) /*override*/;

    // vIndex: 0
    virtual ~MinecraftScriptTelemetryLogger() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecraftScriptTelemetryLogger(::IMinecraftEventing& eventing, bool isClientside);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftEventing& eventing, bool isClientside);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onPluginDiscovery(::ScriptPluginManagerResult const& pluginManagerResult);

    MCAPI void $onPluginRun(::ScriptPluginManagerResult const& pluginManagerResult);

    MCAPI void $onDebuggerListen(bool autoAttach);

    MCAPI void $onDebuggerConnect(bool autoAttach, int retries);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
