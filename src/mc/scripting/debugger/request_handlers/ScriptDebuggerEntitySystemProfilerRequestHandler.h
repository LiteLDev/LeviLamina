#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/scripting/debugger/request_handlers/ScriptDebuggerBaseProfilerRequestHandler.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
class ScriptDebugger;
// clang-format on

class ScriptDebuggerEntitySystemProfilerRequestHandler : public ::ScriptDebuggerBaseProfilerRequestHandler {
public:
    // prevent constructor by default
    ScriptDebuggerEntitySystemProfilerRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void registerHandlers(::ScriptDebugger& debugger) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptDebuggerEntitySystemProfilerRequestHandler(
        ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> profilerControlBroker
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> profilerControlBroker);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerHandlers(::ScriptDebugger& debugger);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
