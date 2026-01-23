#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct ProfilerMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk722636;
    ::ll::UntypedStorage<8, 32> mUnkbf88fc;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerMessage(ProfilerMessage const&);
    ProfilerMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::ProfilerMessage& operator=(::ScriptDebuggerMessages::ProfilerMessage&&);

    MCNAPI ::ScriptDebuggerMessages::ProfilerMessage& operator=(::ScriptDebuggerMessages::ProfilerMessage const&);
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
