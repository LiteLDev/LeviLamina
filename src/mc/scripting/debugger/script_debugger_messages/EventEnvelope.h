#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct EventEnvelope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnka1b3f6;
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
    MCAPI ~EventEnvelope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
