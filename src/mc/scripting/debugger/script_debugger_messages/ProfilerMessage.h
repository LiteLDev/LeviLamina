#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct ProfilerMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk13be7c;
    ::ll::UntypedStorage<8, 32> mUnkbf88fc;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerMessage(ProfilerMessage const&);
    ProfilerMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptDebuggerMessages::ProfilerMessage& operator=(::ScriptDebuggerMessages::ProfilerMessage const&);

    MCFOLD ::ScriptDebuggerMessages::ProfilerMessage& operator=(::ScriptDebuggerMessages::ProfilerMessage&&);
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
