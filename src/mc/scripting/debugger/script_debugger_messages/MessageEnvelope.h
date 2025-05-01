#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct MessageEnvelope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8316e0;
    ::ll::UntypedStorage<8, 72> mUnk696975;
    ::ll::UntypedStorage<8, 72> mUnk7a6c66;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageEnvelope& operator=(MessageEnvelope const&);
    MessageEnvelope(MessageEnvelope const&);
    MessageEnvelope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::MessageEnvelope& operator=(::ScriptDebuggerMessages::MessageEnvelope&&);

    MCNAPI ~MessageEnvelope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
