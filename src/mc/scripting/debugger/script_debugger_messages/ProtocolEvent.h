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
    MCNAPI ::ScriptDebuggerMessages::ProtocolEvent& operator=(::ScriptDebuggerMessages::ProtocolEvent const&);

    MCNAPI ::ScriptDebuggerMessages::ProtocolEvent& operator=(::ScriptDebuggerMessages::ProtocolEvent&&);

    MCNAPI ~ProtocolEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
