#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/request_handlers/ScriptDebuggerBaseProfilerRequestHandler.h"

// auto generated forward declare list
// clang-format off
class ScriptDebugger;
namespace ScriptDebuggerMessages { struct DebuggerRequestMessage; }
// clang-format on

class ScriptDebuggerEntitySystemProfilerRequestHandler : public ::ScriptDebuggerBaseProfilerRequestHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void registerHandlers(::ScriptDebugger& debugger) /*override*/;

    virtual void onDisconnect(::ScriptDebugger& debugger) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::vector<uint>>
    _parseIdsFromRequest(::ScriptDebuggerMessages::DebuggerRequestMessage const& request, ::std::string const argName);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerHandlers(::ScriptDebugger& debugger);

    MCNAPI void $onDisconnect(::ScriptDebugger& debugger);


    // NOLINTEND
};
