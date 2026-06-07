#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct ProfilerMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk722636;
    ::ll::UntypedStorage<8, 32> mUnkc5fde3;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerMessage& operator=(ProfilerMessage const&);
    ProfilerMessage(ProfilerMessage const&);
    ProfilerMessage();
};

} // namespace ScriptDebuggerMessages
