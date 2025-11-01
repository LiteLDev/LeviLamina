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
    // vIndex: 0
    virtual ~IScriptTelemetryLogger() = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
