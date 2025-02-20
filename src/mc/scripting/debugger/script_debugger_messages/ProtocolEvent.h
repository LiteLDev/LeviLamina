#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct ProtocolEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdd594f;
    ::ll::UntypedStorage<4, 4>  mUnk554323;
    ::ll::UntypedStorage<8, 24> mUnkab449e;
    ::ll::UntypedStorage<1, 1>  mUnk32b407;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolEvent(ProtocolEvent const&);
    ProtocolEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptDebuggerMessages::ProtocolEvent& operator=(::ScriptDebuggerMessages::ProtocolEvent const&);

    MCAPI ::ScriptDebuggerMessages::ProtocolEvent& operator=(::ScriptDebuggerMessages::ProtocolEvent&&);

    MCAPI ~ProtocolEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
