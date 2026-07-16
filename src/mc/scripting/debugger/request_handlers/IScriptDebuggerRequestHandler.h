#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptDebugger;
// clang-format on

class IScriptDebuggerRequestHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptDebuggerRequestHandler() = default;

    virtual void registerHandlers(::ScriptDebugger& debugger) = 0;

    virtual void update(::ScriptDebugger& debugger);

    virtual void onDisconnect(::ScriptDebugger& debugger);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
