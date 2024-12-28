#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptPluginManagerResult;
// clang-format on

class IScriptTelemetryLogger {
public:
    // prevent constructor by default
    IScriptTelemetryLogger& operator=(IScriptTelemetryLogger const&);
    IScriptTelemetryLogger(IScriptTelemetryLogger const&);
    IScriptTelemetryLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptTelemetryLogger();

    // vIndex: 1
    virtual void onPluginDiscovery(::ScriptPluginManagerResult const&);

    // vIndex: 2
    virtual void onPluginRun(::ScriptPluginManagerResult const&);

    // vIndex: 3
    virtual void onDebuggerListen(bool);

    // vIndex: 4
    virtual void onDebuggerConnect(bool, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onPluginDiscovery(::ScriptPluginManagerResult const&);

    MCAPI void $onPluginRun(::ScriptPluginManagerResult const&);

    MCAPI void $onDebuggerListen(bool);

    MCAPI void $onDebuggerConnect(bool, int);
    // NOLINTEND
};
