#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

namespace ScriptDebuggerMessages {

struct ProtocolEvent : public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ProtocolEvent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk554323;
    ::ll::UntypedStorage<8, 24> mUnk9ba916;
    ::ll::UntypedStorage<1, 1>  mUnk32b407;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolEvent& operator=(ProtocolEvent const&);
    ProtocolEvent(ProtocolEvent const&);
    ProtocolEvent();
};

} // namespace ScriptDebuggerMessages
