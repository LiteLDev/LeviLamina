#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct EventEnvelope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk7a4d7d;
    ::ll::UntypedStorage<8, 104> mUnk58698e;
    // NOLINTEND

public:
    // prevent constructor by default
    EventEnvelope& operator=(EventEnvelope const&);
    EventEnvelope(EventEnvelope const&);
    EventEnvelope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EventEnvelope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
