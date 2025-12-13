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

    virtual void onPluginDiscovery(::ScriptPluginManagerResult const&);

    virtual void onPluginRun(::ScriptPluginManagerResult const&);

    virtual void onDebuggerListen(bool);

    virtual void onDebuggerConnect(bool, int);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
