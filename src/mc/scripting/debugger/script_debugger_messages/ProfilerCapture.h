#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/EventEnvelope.h"

namespace ScriptDebuggerMessages {

class ProfilerCapture : public ::ScriptDebuggerMessages::EventEnvelope<::ScriptDebuggerMessages::ProfilerCapture> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb80510;
    ::ll::UntypedStorage<8, 32> mUnkdcf7c4;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerCapture& operator=(ProfilerCapture const&);
    ProfilerCapture(ProfilerCapture const&);
    ProfilerCapture();
};

} // namespace ScriptDebuggerMessages
