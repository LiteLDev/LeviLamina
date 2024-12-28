#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptDebuggerMessages { struct NotificationEvent; }
namespace ScriptDebuggerMessages { struct PrintEvent; }
namespace ScriptDebuggerMessages { struct ProfilerCapture; }
namespace ScriptDebuggerMessages { struct ProtocolEvent; }
namespace ScriptDebuggerMessages { struct ProtocolResponse; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptDebuggerProtocol {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk14b32c;
    ::ll::UntypedStorage<8, 24> mUnk6d668e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerProtocol& operator=(ScriptDebuggerProtocol const&);
    ScriptDebuggerProtocol(ScriptDebuggerProtocol const&);
    ScriptDebuggerProtocol();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string receive();

    MCAPI bool receiveProtocolResponse(::ScriptDebuggerMessages::ProtocolResponse& protocolResponse);

    MCAPI void send(::std::string const& message);

    MCAPI void sendNotificationEvent(::ScriptDebuggerMessages::NotificationEvent&& notificationEvent);

    MCAPI void sendPrintEvent(::ScriptDebuggerMessages::PrintEvent&& printEvent);

    MCAPI void sendProfilerCapture(::ScriptDebuggerMessages::ProfilerCapture&& profilerCapture);

    MCAPI void sendProtocolEvent(::ScriptDebuggerMessages::ProtocolEvent&& protocolEvent);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindMessageTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
