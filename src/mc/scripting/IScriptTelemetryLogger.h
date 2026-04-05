#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptPluginManagerResult;
// clang-format on

class IScriptTelemetryLogger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptTelemetryLogger() = default;

    virtual void onPluginDiscovery(::ScriptPluginManagerResult const& pluginManagerResult);

    virtual void onPluginRun(::ScriptPluginManagerResult const& pluginManagerResult);

    virtual void onDebuggerListen(bool autoAttach);

    virtual void onDebuggerConnect(bool autoAttach, int retries);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
