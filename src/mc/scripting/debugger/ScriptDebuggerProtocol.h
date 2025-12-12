#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptDebuggerMessages { struct NotificationEvent; }
namespace ScriptDebuggerMessages { struct PrintEvent; }
namespace ScriptDebuggerMessages { struct ProfilerCapture; }
namespace ScriptDebuggerMessages { struct ProtocolEvent; }
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
    MCNAPI ::std::string receive();

    MCNAPI void send(::std::string const& message);

    MCNAPI void sendNotificationEvent(::ScriptDebuggerMessages::NotificationEvent&& notificationEvent);

    MCNAPI void sendPrintEvent(::ScriptDebuggerMessages::PrintEvent&& printEvent);

    MCNAPI void sendProfilerCapture(::ScriptDebuggerMessages::ProfilerCapture&& profilerCapture);

    MCNAPI void sendProtocolEvent(::ScriptDebuggerMessages::ProtocolEvent&& protocolEvent);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindMessageTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
