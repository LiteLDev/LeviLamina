#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/request_handlers/ScriptDebuggerBaseProfilerRequestHandler.h"

// auto generated forward declare list
// clang-format off
class ScriptDebugger;
// clang-format on

class ScriptDebuggerWhiskerRequestHandler : public ::ScriptDebuggerBaseProfilerRequestHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void registerHandlers(::ScriptDebugger& debugger) /*override*/;

    virtual void onDisconnect(::ScriptDebugger& debugger) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerHandlers(::ScriptDebugger& debugger);

    MCNAPI void $onDisconnect(::ScriptDebugger& debugger);


    // NOLINTEND
};
