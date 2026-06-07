#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct MessageEnvelope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk114ba5;
    ::ll::UntypedStorage<8, 72> mUnk696975;
    ::ll::UntypedStorage<8, 56> mUnk7a6c66;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageEnvelope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessageEnvelope(::ScriptDebuggerMessages::MessageEnvelope const&);

    MCNAPI ::ScriptDebuggerMessages::MessageEnvelope& operator=(::ScriptDebuggerMessages::MessageEnvelope&&);

    MCNAPI ::ScriptDebuggerMessages::MessageEnvelope& operator=(::ScriptDebuggerMessages::MessageEnvelope const&);

    MCNAPI ~MessageEnvelope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::MessageEnvelope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
