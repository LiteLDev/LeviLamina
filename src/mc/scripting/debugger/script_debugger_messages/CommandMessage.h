#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct CommandMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk199c72;
    ::ll::UntypedStorage<8, 32> mUnk6c3f8d;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandMessage(CommandMessage const&);
    CommandMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptDebuggerMessages::CommandMessage& operator=(::ScriptDebuggerMessages::CommandMessage const&);

    MCAPI ::ScriptDebuggerMessages::CommandMessage& operator=(::ScriptDebuggerMessages::CommandMessage&&);
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
