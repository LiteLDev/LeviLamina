#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct DebuggerRequestMessage {
public:
    // member variables
    // NOLINTBEGIN
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
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DebuggerRequestMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
