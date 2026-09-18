#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

namespace ScriptDebuggerMessages {

struct DebuggerRequestMessage
: public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::DebuggerRequestMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaffbb3;
    ::ll::UntypedStorage<4, 4>  mUnkcf195f;
    ::ll::UntypedStorage<8, 32> mUnkabfe5a;
    ::ll::UntypedStorage<8, 80> mUnkaccc32;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerRequestMessage& operator=(DebuggerRequestMessage const&);
    DebuggerRequestMessage(DebuggerRequestMessage const&);
    DebuggerRequestMessage();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& msPayloadType();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
