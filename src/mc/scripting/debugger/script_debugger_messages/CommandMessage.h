#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/debugger/script_debugger_messages/NetworkPayload.h"

namespace ScriptDebuggerMessages {

struct CommandMessage : public ::ScriptDebuggerMessages::NetworkPayload<::ScriptDebuggerMessages::CommandMessage> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9248ec;
    ::ll::UntypedStorage<8, 32> mUnkf6e024;
    ::ll::UntypedStorage<8, 32> mUnk9f7021;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandMessage& operator=(CommandMessage const&);
    CommandMessage(CommandMessage const&);
    CommandMessage();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& msPayloadType();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
