#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

namespace ScriptDebuggerMessages {

struct StopProfilerMessage
: public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::StopProfilerMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8fc628;
    ::ll::UntypedStorage<8, 16> mUnkab148a;
    ::ll::UntypedStorage<8, 32> mUnk19887d;
    // NOLINTEND

public:
    // prevent constructor by default
    StopProfilerMessage& operator=(StopProfilerMessage const&);
    StopProfilerMessage(StopProfilerMessage const&);
    StopProfilerMessage();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& msPayloadType();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
