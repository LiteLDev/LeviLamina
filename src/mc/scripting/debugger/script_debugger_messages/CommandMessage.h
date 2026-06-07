#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct CommandMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf6e024;
    ::ll::UntypedStorage<8, 32> mUnk9f7021;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandMessage& operator=(CommandMessage const&);
    CommandMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandMessage(::ScriptDebuggerMessages::CommandMessage const&);

    MCNAPI ::ScriptDebuggerMessages::CommandMessage& operator=(::ScriptDebuggerMessages::CommandMessage&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::CommandMessage const&);
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
