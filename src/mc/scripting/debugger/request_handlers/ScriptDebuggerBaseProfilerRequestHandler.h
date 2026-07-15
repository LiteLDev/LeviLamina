#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/profile/ProfilerControlTarget.h"
#include "mc/scripting/debugger/request_handlers/IScriptDebuggerRequestHandler.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
class ScriptDebugger;
// clang-format on

class ScriptDebuggerBaseProfilerRequestHandler : public ::IScriptDebuggerRequestHandler {
public:
    // ScriptDebuggerBaseProfilerRequestHandler inner types declare
    // clang-format off
    struct PendingRequest;
    // clang-format on

    // ScriptDebuggerBaseProfilerRequestHandler inner types define
    struct PendingRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkd2679f;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingRequest& operator=(PendingRequest const&);
        PendingRequest(PendingRequest const&);
        PendingRequest();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka39c38;
    ::ll::UntypedStorage<8, 64> mUnk69b6ba;
    ::ll::UntypedStorage<8, 24> mUnkc1e6d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerBaseProfilerRequestHandler& operator=(ScriptDebuggerBaseProfilerRequestHandler const&);
    ScriptDebuggerBaseProfilerRequestHandler(ScriptDebuggerBaseProfilerRequestHandler const&);
    ScriptDebuggerBaseProfilerRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(::ScriptDebugger& debugger) /*override*/;

    virtual void onDisconnect(::ScriptDebugger& debugger) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebuggerBaseProfilerRequestHandler(
        ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> profilerControlBroker,
        ::Bedrock::Profiling::Control::ProfilerControlTarget     profilerTarget
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker> profilerControlBroker,
        ::Bedrock::Profiling::Control::ProfilerControlTarget     profilerTarget
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(::ScriptDebugger& debugger);

    MCNAPI void $onDisconnect(::ScriptDebugger& debugger);


    // NOLINTEND
};
